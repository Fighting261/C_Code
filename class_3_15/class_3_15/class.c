#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a=0, b=0;
	printf("请输入两个整数\n");
	scanf("%d%d",&a,&b);
	printf("a+b=%d\n", Add(a, b));
	return 0;
}

int Add(x,y)
{
	int z = x + y;
	return z;
}