#include <stdio.h>

typedef struct sa
{
	char a;
	double c;
	int b;
}
sa_t;

typedef struct sb
{
	char a;
	char c;
	char c1;
	char c2;
	char c3;
	int b;
}
sb_t;

#pragma pack(8)
typedef struct sc
{
	char a;
	int b;
}
sc_t;

#pragma pack()

sa_t a;
sb_t b;
sc_t c;
int main()
{
	sa_t *temp = &a;
	sb_t *tempb = &b;
	sc_t *tempc = &c;
	printf("size of sa_t is %d\n", sizeof(sa_t));
	printf("*a = %p -%p\n",&a,++temp);
	printf("*b = %p -%p\n",&b,++tempb);
	printf("*c = %p -%p\n",&c,++tempc);
	return 0;
}

