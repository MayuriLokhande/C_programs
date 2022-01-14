#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;// wild pointer . It can point to any memory location
	//*ptr=34; //This is not a good thing to do as 34 can be written to a garbage value
	ptr = &a; // now ptr is no more wild ptr
	printf("%d\n", *ptr);
	return 0;
}


	
