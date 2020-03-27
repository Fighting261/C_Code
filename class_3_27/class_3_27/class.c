#define _CRT_SECURE_NO_WARNINGS 1

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//#include <stdio.h>
//char reverse_string(char* str)
//{
//	if (*str == '\0')
//	{
//		return;
//	}
//	reverse_string(str + 1);
//	printf("%c", *str);
//}
//
//int main()
//{
//	char str[] = "abc";
//	reverse_string(str);
//	
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n>9)
//		return DigitSum(n / 10) + n % 10;
//	else
//	return n;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数字\n");
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//
//	return 0;
//}

////编写一个函数实现n的k次方，使用递归实现。
//#include<stdio.h>
//int Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//		return n* Pow(n, k - 1);
//}
//int main()
//{
//	int n = 2;
//	int k = 3;
//	printf("%d\n", Pow(n, k));
//
//	return 0;
//}
//递归和非递归分别实现求第n个斐波那契数
////递归方法
//#include <stdio.h>
//long long Fib(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);	
//}
//int main()
//{
//	int n = 0;
//	printf("请输入第N位\n");
//	scanf("%d",&n);
//	printf("%d\n", Fib(n));
//	return 0;
//}
//迭代方法
#include <stdio.h>
long long Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	printf("请输入第N位\n");
	scanf("%d",&n);
	printf("%d\n", Fib(n));
	return 0;
}