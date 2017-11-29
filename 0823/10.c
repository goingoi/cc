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
	printf("1.範例一:\n");
	printf("2.範例二:\n");
	printf("3.作業一:\n");
	printf("4.作業二:\n");
	printf("5.作業三:\n");
	printf("6.作業四:\n");
	do
	{
		printf("輸入題號:");
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
			printf("輸入錯誤\n");
			break;
		}
	} while (b == 0);
	system("pause");
	return 0;
}