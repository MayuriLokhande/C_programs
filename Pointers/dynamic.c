#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int *p;// p variable is stored on stack
	p =(int*)malloc(sizeof(int));
	*p=10;
	free(p);
	p = (int*)malloc(sizeof(int));
	*p=20;
	free(p);
	p = (int*)malloc(20*sizeof(int)); //array dynamic allocation
	free(p);

	int n;
	printf("Enter size of array:\n");
	scanf("%d", &n);
	int *A =(int*) malloc(n*sizeof(int));
	for(int i=0;i<n; i++)
	{
		*(A+i)=i;
	}
	for(int i=0; i<n;i++)
	{
		printf("A[%d]= %d\n",i,A[i]);
	}
	free(A);
	int *A = (int*) calloc(n,sizeof(int));

	return 0;
}

