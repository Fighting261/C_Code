#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
  
int main()
{
	int a = 0, b = 0;

	printf("请输入两个整数\n");
	scanf("%d%d", &a, &b);

	if (a < b)
		printf("%d\n", b);
	else if (a > b)
		printf("%d\n", a);
	else
	    printf("两个整数相等\n");

	return 0;

}


