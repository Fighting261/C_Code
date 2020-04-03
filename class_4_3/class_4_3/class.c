#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int num = i;
//		int sum = 0;
//		int count = 1;
//		while (num / 10)
//		{
//			count++;
//			num = num / 10;
//		}
//		num = i;
//		while (num)
//		{
//			sum += (int)pow(num % 10, count);
//			num = num / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}	
//	}
//	printf("\n");
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6 - i; j++)
		{
			printf("  ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
		printf("\n");
	}

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("  ");
		}
		for (j = 0; j < 2 * (6 - i) - 1; j++)
		{
			printf("* ");
		}
		printf("\n");
		printf("\n");
	}

	return 0;
}