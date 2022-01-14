#include <stdio.h>

int arr[5],i;

int main()
{
	printf("Enter the array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("size of integer is %ld\n",sizeof(int));
	printf("Array elements are:");
	for(int j =0; j<5;j++)
	{
		
		printf("arr[%d] : %p\n",j,&arr[j]);

	}

	return 0;
}

