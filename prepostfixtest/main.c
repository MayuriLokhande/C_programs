#include<stdio.h>
int main()
{
	char arr[]="geeksforgeeks";
	char *p = arr;
	char *q = arr;
	++*p;
	*q++;
	printf("%c:\n", *p);
	printf("%c: \n",*q);
	return 0;
}

