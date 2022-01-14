#include <stdio.h>

void add(int a, int b)
{
	printf("%d\n",a+b);
}
void substract(int a,int b)
{
	printf("%d\n",a-b);
}

void multiply(int a, int b)
{
	printf("%d\n", a*b);
}

int main()
{
	int op;
	int (*func_ptr_array[])(int, int) = {add, substract, multiply};
	printf("Enter the operation:");
	scanf("%d",&op);
	int a= 5, b=4;
	(*func_ptr_array[op])(a,b);
	return 0;
}

