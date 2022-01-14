#include <stdio.h>

int main()
{
	volatile int i=0;
	printf("%d\n", (++i)+(++i));
	return 0;
}

