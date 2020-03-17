#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0, b = 0, t = 0;
	printf("请输入两个整数\n");
	scanf("%d%d", &a, &b);
	printf("a=%d b=%d\n", a, b);
	t = a; a = b; b = t;
	printf("两数交换之后\n");
	printf("a=%d b=%d\n", a, b);

	return 0;
}