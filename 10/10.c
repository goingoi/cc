#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();
void ex11();
void hw1();
void hw2();
void hw3();
void hw4();
void hw5();
void hw61();
void hw62();
void hw63();
void hw64();
void hw65();
void hw66();
int main()
{
	int a, b;
	b = 0;
	printf("1.�d�Ҥ@:\n");
	printf("2.�d�ҤG:\n");
	printf("3.�d�ҤT:\n");
	printf("4.�d�ҥ|:\n");
	printf("5.�d�Ҥ�:\n");
	printf("6.�d�Ҥ�:\n");
	printf("7.�d�ҤC:\n");
	printf("8.�d�ҤK:\n");
	printf("9.�d�ҤE:\n");
	printf("10.�d�ҤQ:\n");
	printf("11.�d�ҤQ�@:\n");
	printf("12.�@�~�@:\n");
	printf("13.�@�~�G:\n");
	printf("14.�@�~�T:\n");
	printf("15.�@�~�|:\n");
	printf("16.�@�~��:\n");
	printf("17.�@�~�����@:\n");
	printf("18.�@�~�����G:\n");
	printf("19.�@�~�����T:\n");
	printf("20.�@�~�����|:\n");
	printf("21.�@�~������:\n");
	printf("22.�@�~������:\n");
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
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		case 6:
			ex6();
			break;
		case 7:
			ex7();
			break;
		case 8:
			ex8();
			break;
		case 9:
			ex9();
			break;
		case 10:
			ex10();
			break;
		case 11:
			ex11();
			break;
		case 12:
			hw1();
			break;
		case 13:
			hw2();
			break;
		case 14:
			hw3();
			break;
		case 15:
			hw4();
			break;
		case 16:
			hw5();
			break;
		case 17:
			hw61();
			break;
		case 18:
			hw62();
			break;
		case 19:
			hw63();
			break;
		case 20:
			hw64();
			break;
		case 21:
			hw65();
			break;
		case 22:
			hw66();
			break;
		default:
			printf("��J���~\n");
			break;
		}
	} while (b == 0);
	system("pause");
	return 0;
}