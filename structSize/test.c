#include <stdio.h>
#pragma pack(16)
typedef struct sa
{

	int a __attribute__((aligned(16)));
	int b __attribute__((aligned(16)));
}
sa_t;
#pragma pack()
sa_t a;

int main()
{
	sa_t * temp = &a;
	printf("%p -%p\n",&a,++temp);
	return 0;
}

