#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char* str)
{
	int n = strlen(str);
	int temp;
	
	for(int i=0; i<n/2; i++)
	{
		temp=str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}
	
}

int main()
{
	char s[]= "geeks";
	reverse(s);
	printf("%s", s);
	return 0;
}


