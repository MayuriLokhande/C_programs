#include <stdio.h>
#include "test.h"

void b()
{
	printf("This is function %s\n", __func__);
	test();
}


