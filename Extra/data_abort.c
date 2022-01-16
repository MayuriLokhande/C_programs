#include <stdio.h>

int main()
{
	printf("Data abort example\n");
	volatile int *p;
	p =(int*)0x10000;
	*p +=1;
	return 0;
}
