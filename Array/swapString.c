#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Swap strings stored in pointers
void swap1(char **str1,char **str2)
{
	char *temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}


//swap strings stored in character array
void swap2(char *str1,char *str2)
{
	char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
	free(temp);
}

int main()
{
	char *s1 = "Mayuri";
	char *s2 = "Lokhande";
	char s3[]="Proud";
	char s4[]="Bosch";
	swap1(&s1, &s2);
	swap2(s3,s4);
	printf("s1 is %s & s2 is %s\n", s1,s2);
	printf("s3 is %s & s4 is %s\n",s3,s4);

	return 0;
}


			
