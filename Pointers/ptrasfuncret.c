#include <stdio.h>
#include <stdlib.h>

int* Add(int* a, int* b)
{
	int* c =(int*)malloc(sizeof(int));
	*c =(*a)+(*b);
	return c;
}

int main()
{
	int a=2 , b=3;
	int* z = Add(&a,&b);
	printf("z is %d\n",*z);
	return 0;
}

