#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//void PrintArr(int arr[])
//{
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	PrintArr(arr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	char str[] = "abcdefg";
//	for (i = 0; i < strlen(str); i++)
//	{
//		printf("%c", str[i]);
//
//	}
//	printf("\n");
//	Reverse(str);
//	for (i = 0; i < strlen(str); i++)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}

#include <stdio.h>
int Sum(int num)
{
	int a = 2;
	int sum = 0;
	int i = 0;
	for (i = 1; i <= num; i++)
	{
		sum += a;
		a = (a * 10) + a;
	}
	return sum;
}

int main()
{

	int num = 0;
	printf("求前几项的和");
	scanf("%d", &num);
	printf("前%d之和为：%d\n", num,Sum(num));

	return 0;
}