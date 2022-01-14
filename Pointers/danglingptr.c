#include <stdio.h>
#include <stdlib.h>

int* Func()
{
	int a,b,sum;
	sum = a+b;
	return &sum;
}

int main()
{
	//Case 1: deallocation of memory
	int* ptr = (int*)malloc(7*sizeof(int));
	ptr[0]=2;
	ptr[1]=3;
	ptr[2]=4;
	free(ptr); //ptr becomes dangling now
	
	//Case 2: Function returning address of local variable
	int* funcptr = Func();
	printf("%d:", *funcptr);

	// Case 3 : Variable goes out of scope
	
	int* dangptr;
	{
		int a = 12;
		dangptr = &a;
	}
	//Here variable goes out of scope & ptr becomes dangling pointer.


