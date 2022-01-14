#include <stdio.h>

void A()
{
	printf("Hi");
}
void B(void(* ptr)())
{
	(*ptr) ();
}
int main()
{
	void (* ptr)() = &A;
	B(ptr);
	return 0;
}

