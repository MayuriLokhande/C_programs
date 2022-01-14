#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
	int student_id;
	int struct_size;
	int name_len;
	char name[];
}std_t;

std_t* createinfo(std_t* s, int id , char* name)
{
	s = malloc(sizeof(*s) + sizeof(char) * strlen(name));

	s->student_id = id;
	s->name_len = strlen(name);
	strcpy(s->name, name);

	s->struct_size = (sizeof(*s) + sizeof(char) * strlen(s->name));
	return s;
}

void print(std_t* s)
{
	printf("id: %d\n, size: %d\n, len: %d\n, name : %s\n", s->student_id, s->struct_size, s->name_len, s->name);
}


int main()
{
	std_t* s1 = createinfo(s1, 1, "Mayuri");
	std_t* s2 = createinfo(s2, 2, "Rohit");

	print(s1);
	print(s2);

	printf("size of s1 : %lu\n", sizeof(std_t));
	printf("size of s1 ptr : %lu\n", sizeof(s1));
	return 0;
}

