#include <stdio.h>

#define merge(a,b)	a##b
#define get(a)	#a
int main()
{
	printf("%d\n", merge(12,13));
	printf("%s\n", get(MAyuri));
	return 0;
}

