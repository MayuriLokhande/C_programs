#include<stdio.h>

int main()
{
	const int local = 10;
	int *ptr = (int*) &local;
	printf("Inital value: %d\n", local);
	*ptr =100;
	printf("Midified value: %d\n",local);
	return 0;
}

