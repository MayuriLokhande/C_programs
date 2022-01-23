#include <stdio.h>
#include "test.h"

void a()
{
	printf("This is function %s\n", __func__);
	test();
}

