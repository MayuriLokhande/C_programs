#include <stdio.h>

typedef struct date
{
	unsigned int d: 5;
	unsigned int m : 4;
	unsigned int y;
}date_t;

int main()
{
	date_t d1 = {31,12,1997};
	date_t* d2 = &d1;
	printf("size of struct is %ld\n", sizeof(date_t));
	printf("date is %d/%d/%d\n", d2->d, d2->m, d2->y);
	return 0;
}

