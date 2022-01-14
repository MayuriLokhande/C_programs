#include<stdio.h>

#define printName(a)	#a
#define getname(b,buffer)	sprintf(buffer,"%s", #b)

int main()
{
	int var __attribute__((unused));
	int x;
	char buffer[20];
	printf("x is :%s",printName(x));
	getname(var,buffer);
	printf("var is :%s", buffer);
	return 0;
}

	


