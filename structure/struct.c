#include <stdio.h>

typedef struct employee
{
	char name[20];
	int id;
	float grade;
} employee_t;


int main()
{
	employee_t e1 = { "Mayuri", 1, 8.79 };
	printf("%s", e1.name);

	return 0;
}
