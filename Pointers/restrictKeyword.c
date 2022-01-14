#include <stdio.h>

void operation(int* a, int*b, int*c)
{
	*a+=*c;
	*c+=*b;
}

int main()
{
	int  a=2,b=3, c=5;
	operation(&a,&b,&c);
	printf("%d %d %d\n",a,b,c);
	return 0;
}

