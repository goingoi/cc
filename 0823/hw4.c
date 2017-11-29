#include <stdio.h>
#include <stdlib.h>
hw4()
{
	int b, d;
	d = 0;
	for (b = 1; b<11; b++)
	{
		d = b*b + d;
	}
	printf("%d\n", d);
}