#include <stdio.h>
#include <string.h>

void myMemcpy(void* src, void* dst, int n)
{
	char* csrc = (char*)src;
	char* cdst = (char*)dst;
	for(int i=0; i<n ; i++)
	{
		cdst[i] = csrc[i];
	}
}

int main()
{
	char csrc[] = "Mayuri";
	char cdst[100];
	myMemcpy(csrc,cdst, strlen(csrc)+1);
	printf("dest string is %s\n", cdst);

	int isrc[]={10,20,30,40,50};
	int n = sizeof(isrc)/sizeof(isrc[0]);
	int idst[n];
	myMemcpy(isrc,idst,sizeof(isrc));
	for(int i=0; i<n ; i++)
	{
		printf("idst is %d\n", idst[i]);
	}
	return 0;
}

