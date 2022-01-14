#include <stdio.h>
int array[] = {1,2,3};
#define n	sizeof(array)/sizeof(array[0])

void param(int arr[])
{

	printf("Displaying values:\n");
	for(int i=0; i<n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
void point(int* ptr)
{

	//printf("size of arr:%ld\n", sizeof(ptr));
	//printf("size of arr:%ld\n", sizeof(ptr[0]));
	//int n = sizeof(ptr)/sizeof(ptr[0]);
	//printf("n:%d",n);
	printf("Displaying values:\n");
	for(int i=0; i<n; i++)
		printf("%d\t",*(ptr+i));
	printf("\n");
}

int main()
{

	printf("%d\n", sizeof(int*));
	printf("size of arr:%ld\n", sizeof(array));
	printf("size of arr:%ld\n", sizeof(array[0]));
	param(array);
	point(array);
	return 0;
}

