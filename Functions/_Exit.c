#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x =10;
	printf("x = %d\n", x);
	_Exit(0);
	printf("Calling _Exit()");
	return 0;
}

