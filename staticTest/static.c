#include<stdio.h>
int test()
{
	static int count = 0;
	count++;
	return count;
}
int main()
{
	printf("count is %d\n",test());
	printf("count is %d\n",test());
	return 0;
}

