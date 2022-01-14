#include <stdio.h>

void foo()
{
	printf("%s\n", __func__);
}
void bar()
{
	printf("%s\n", __func__);
}
int main()
{
	foo();
	bar();
	return 0;
}

