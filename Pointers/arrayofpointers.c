#include <stdio.h>
#define SIZE	3

int main()
{
	int arr[] = {1,2,3};
	int *ptr[SIZE];

	for(int i=0; i<SIZE;i++)
	{
		ptr[i] = &arr[i];
	}
	for(int i=0;i<SIZE;i++)
	{
		printf("%d\n", *ptr[i]);
	}
	return 0;
}

