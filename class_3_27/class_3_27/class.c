#define _CRT_SECURE_NO_WARNINGS 1

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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
//	printf("������һ������\n");
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//
//	return 0;
//}

////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
////�ݹ鷽��
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
//	printf("�������Nλ\n");
//	scanf("%d",&n);
//	printf("%d\n", Fib(n));
//	return 0;
//}
//��������
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
	printf("�������Nλ\n");
	scanf("%d",&n);
	printf("%d\n", Fib(n));
	return 0;
}