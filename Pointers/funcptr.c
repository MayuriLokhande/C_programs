#include <stdio.h>

int Add(int a, int b)
{

	return a+b;
}

void print(char* name)
{
	printf("%s\n",name);
}

void B(void (*ptr)())  //Function pointer as argument
{
	ptr();
}

void A()
{
	printf("HEllo");
}


int main()
{
	int (*p)(int, int); //function pointer declaration
	p=&Add;
	int c;
	c=(*p)(2,3);
	printf("%d\n", c);
	p=Add;
	int d = p(2,4);
	printf("%d\n",d);

	void (*q)(char*);
	q= print;
	q("MAyuri");
	
	void (*ptr)() = A; 
	B(ptr);
	B(A); //Call back function 

	return 0;
}

