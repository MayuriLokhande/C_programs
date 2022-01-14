#include <stdio.h>

typedef union test
{
	int var1;
	char var2;
	float var3;
}
test_t;


int main()
{
	test_t var;
	var.var2='a';
	printf("%d\n",var.var1);
	printf("%f\n",var.var3);
	return 0;
}

