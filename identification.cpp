#include <iostream>
using namespace std;

int main()
{
	char cpuname[64];

	_asm
	{
		lea	ebx, cpuname
		mov esi, ebx
		mov edi, ebx
		mov eax, 80000002h
		cpuid
		stosd
		xchg eax, ebx
		stosd
		xchg eax, ecx
		stosd
		xchg eax, edx
		stosd
		mov eax, 80000003h
		cpuid
		stosd
		xchg eax, ebx
		stosd
		xchg eax, ecx
		stosd
		xchg eax, edx
		stosd
		mov eax, 80000004h
		cpuid
		stosd
		xchg eax, ebx
		stosd
		xchg eax, ecx
		stosd
		xchg eax, edx
		stosd
	}
	cout  << cpuname << endl;
	
	system("Pause");
	return 0;
}

//processor identification
