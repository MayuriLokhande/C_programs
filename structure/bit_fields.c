#include <stdio.h>
//Example 1
typedef struct s
{
	unsigned int x :2;
	unsigned int y : 2;
	unsigned int z : 2;
}s_t;

//Example 2
typedef struct p
{
	unsigned int x;
	//unsigned int y : 33;
	unsigned int z;
}p_t;

//Example 3
typedef struct test
{
	unsigned int x;
	long int y : 33;
	unsigned int z;
}test_t;

//Example 4
typedef union meet
{
	unsigned int x: 3;
	unsigned int y: 3;
	int z;
}meet_t;

int main()
{
//	s_t s1 = {1,2,5};
//	printf("size of struct s is %ld\n", sizeof(s_t));
//	printf("s1.z is %d\n", s1.z);
//	
	printf("size of struct p is %ld\n", sizeof(p_t));

	test_t t1;
	unsigned int* ptr1 = &t1.x;
	unsigned int* ptr2 = &t1.z;
	printf("%ld\n", ptr1 - ptr2);

	meet_t m1 = { 5,4,1};
	printf("%d, %d, %d\n", m1.x , m1.y, m1.z);
	return 0;
}

