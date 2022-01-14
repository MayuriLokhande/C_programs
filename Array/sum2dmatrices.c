#include <stdio.h>

int main()
{
	int a[2][2];
	int b[2][2];
	int sum[2][2];

	printf("Enter matrix a values:\n");
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}

	printf("\n");
	}

	printf("Enter matrix b values:\n");
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}

	printf("\n");
	}
	printf("Calculate result:\n");
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			sum[i][j]=a[i][j] + b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}

