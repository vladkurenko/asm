void tobin(long n, char *str)
{
	_asm {
		mov eax, n
		mov ebx, str
		mov ecx, 32
		L:
		shl eax, 1
		jc C1
		mov[ebx], '0'
		jmp C2
		C1 :
		mov[ebx], '1'
		C2 :
		add ebx, 1
		loop L
	}
}

//representation in binary code
