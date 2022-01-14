#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r=3, c=4;
	int* ptr = malloc((r*c) * sizeof(int));

	for(int i=0; i<r*c; i++)
	{
		ptr[i] = i;
	}
	
	printf("Displaying as 2D array\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			printf("%d\t", ptr[i*c + j]);
		}
		printf("\n");
	}
	return 0;
}

