#include <stdio.h>
#include <stdlib.h>
hw2()
{
	char x1 = 'a', x2 = 'b', x3 = 'n';
	{
		printf("%c", x2);
		printf("%c", x1);
		printf("%c", x3);
		printf("%c", x1);
		printf("%c", x3);
		printf("%c\n", x1);
	}
}