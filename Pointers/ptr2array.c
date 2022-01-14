#include <stdio.h>

int main()
{
	int* p ;
	int (*ptr)[5];
	int arr[5] = {1,2,3,4,5};

	p = arr;  // pointer to 0th element of array
	ptr = &arr; //pointer to array of 5 integers
	
	printf("address of p is %p\n", p);
	printf("address of p is %p\n", ptr);
	
	for(int i=0; i<5; i++)
	{
		printf("%d\n", *(*ptr +i));
	}
	
	p++;
	ptr++;

	printf("address of p is %p\n", p);
	printf("address of p is %p\n", ptr);
	
	printf("size of p is %lu & *p is %lu: \n",sizeof(p), sizeof(*p));
	printf("size of ptr is %lu & *ptr is %lu\n", sizeof(ptr), sizeof(*ptr));

	return 0;
}

