#include <stdio.h>
#include <stdlib.h>
hw5()
{
	int a, b, c, d, e;
	printf("�ݭn�R�X�~�Q�s���K? \n");
	scanf("%d", &a);
	printf("�ݭn�R�X�~�ï]����? \n");
	scanf("%d", &b);
	c = a * 55;
	d = b * 45;
	e = c + d;
	if (c + d >= 700 || b >= 10 || a + b >= 13)
	{
		e = e*0.95;
	}
	printf("�o���`�@�O:%d", e);
}