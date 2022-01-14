#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	char ch;
	printf("Enter the integer:\n");
	scanf("%d",&a);
	if(scanf("%d",&a) == -1)
	{
		return EXIT_FAILURE;
	}
	fflush(stdin);
	printf("Enter character:\n");
	scanf("%c",&ch);
	printf("Integer is : %d\n", a);
	printf("Character is : %c\n",ch);
	return 0;
}

