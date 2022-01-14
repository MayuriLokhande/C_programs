#include <stdio.h>

int main()
{
	int n,p;
	printf("Enter number of rows:");
	int a=scanf("%d %d",&n, &p);
	printf("a is %d, n is %d\n",a,n);
	for(int i=0; i<n; i++)
	{
		for(int j =0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
