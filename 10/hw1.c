#include <stdio.h>
#include <stdlib.h>
hw1()
{
	int a;
	printf("打數字");
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("基數\n");
	else
		printf("偶數\n");
}