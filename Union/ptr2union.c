#include <stdio.h>

typedef union student
{
	int marks;
	char name[20];
	float cgpa;
}sdt;

int main()
{
	sdt s1 = {10, "Mayuri", 8.9};
	sdt* s2 = &s1;
	printf("%d", s2->marks);
	return 0;
}


