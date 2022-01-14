#include <stdio.h>

void startup(void) __attribute__((constructor));
void cleanup(void) __attribute__((destructor));

void startup(void)
{
	printf("this is before main\n");
}
void cleanup(void)
{
	printf("this is after main");
}

int main()
{
	printf("I love iron man\n");
	return 0;
}

