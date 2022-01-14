#include <stdio.>

int main()
{
	const char *p ; // pointer to constant character
	char a='a', b ='b';
	p = &a;
	*p=b;//not allowed
	p = &b; // allowed
	
	char *const ptr; //constant pointer to non constant character
	p = &a;
	p=*b;
	p=&b; //not allowed

	const char *const p;
	p = &a;
	*p = b ; //not allowed
	p =&b; //not allowed
	
	return 0;
}


