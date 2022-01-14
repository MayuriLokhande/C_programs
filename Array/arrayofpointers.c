#include <stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int* ptr[5];
	for(int i=0; i<5; i++)
	{
		ptr[i]= &arr[i];
	}
	printf("Display ptr values\n");
	for(int i=0; i<5; i++)
	{
		printf("%d\n", *ptr[i]);
	}
	return 0;
}

