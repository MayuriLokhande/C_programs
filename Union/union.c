#include <stdio.h>

typedef union geeks
{
	int x;
	char a[7];
	float y;
}g_t;

int main()
{
	g_t g1;
	g1.x = 2;
	printf("%f", g1.y);
	return 0;
}

