#include <stdio.h>
#include <string.h>

void prints(char str[])
{
	printf("%s\n",str);
}

int main()
{
	char str[]="GeeksForGeeks";
	char str1[20];
	char str2[13]="GeeksForGeeks";
	char str4[]={'g','e','e','k','s'};
	const char *s = "geeksforgeeks";
	printf("length of string is %lu\n", strlen(str));
	printf("size of char array is %lu\n",sizeof(str));
	printf("size of char array is %lu\n",sizeof(str2));
	printf("size of char array is %lu\n",sizeof(str4));
	printf("size of char array is %lu\n",sizeof(s));
	printf("Enter string:");
	scanf("%s", str1);
	prints(str);
	prints(str1);
	return 0;

}

