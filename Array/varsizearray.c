#include <stdio.h>

int main()
{
	int M = 2;
	int arr[M] ={0}; //Not allowed to initialise variable sized array ...Program throws error
	for(int i = 0 ; i<M; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

