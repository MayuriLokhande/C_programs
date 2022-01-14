#include <stdio.h>

int main()
{
	int a =34;
	int* ptr = NULL;
	printf("%d\n", ptr);
	if(ptr != NULL)
	{

		printf("%d\n", *ptr);
	}
	else
	{
		printf("NULL pointer cannot be deferenced");
	}

	return 0;
}

