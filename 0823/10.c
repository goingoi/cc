#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void ex1();
void ex2();
void hw1();
void hw2();
void hw3();
void hw4();
int main()
{
	int a, b;
	b = 0;
	printf("1.�d�Ҥ@:\n");
	printf("2.�d�ҤG:\n");
	printf("3.�@�~�@:\n");
	printf("4.�@�~�G:\n");
	printf("5.�@�~�T:\n");
	printf("6.�@�~�|:\n");
	do
	{
		printf("��J�D��:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			hw1();
			break;
		case 4:
			hw2();
			break;
		case 5:
			hw3();
			break;
		case 6:
			hw4();
			break;
		default:
			printf("��J���~\n");
			break;
		}
	} while (b == 0);
	system("pause");
	return 0;
}