#include <stdio.h>
#include <stdlib.h>
hw4()
{
	int a, b, c, d, e;
	printf("�ݭn�R�X�~�Q�s���K? \n");
	scanf("%d", &a);
	printf("�ݭn�R�X�~�ï]����? \n");
	scanf("%d", &b);
	c = a * 55;
	d = b * 45;
	e = c + d;
	if (c + d >= 800 && a + b >= 16)
	{
		e = e*0.9;
	}
	printf("�o���`�@�O:%d", e);

}