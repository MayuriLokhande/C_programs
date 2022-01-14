#include<stdio.h>
const volatile int local = 10;
int *ptr = (int*) &local;

int main()
{
	printf("Inital value of local:%d\n", local);
	*ptr = 100;
	printf("Modified value of local:%d\n",local);
	return 0;
}


