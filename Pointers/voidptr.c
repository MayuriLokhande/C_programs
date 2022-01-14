#include <stdio.h>

int main()
{
	int a = 345;
	float b = 8.3;
	void* ptr;
	ptr = &a;
	printf("value of a is %d\n", *((int*)ptr));
	return 0;
}

