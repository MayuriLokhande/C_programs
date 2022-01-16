#include <stdio.h>
int main()
{
	printf("Instruction abort testing\n");
	asm volatile(".quad 0xFFFFFFFF");
	return 0;
}

