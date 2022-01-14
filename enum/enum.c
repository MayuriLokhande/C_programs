#include <stdio.h>

enum status {invalid_id , valid_id }status_t;

int main()
{
	int id;
	printf("Enter uart_device_ID");
	scanf("%d",&id);
	(id<2) ? (status_t = valid_id) : (status_t = invalid_id);
	printf("%d", status_t);
	return 0;
}

