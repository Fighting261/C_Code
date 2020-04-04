#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 20; i++)
	{
		count++;
		if (count % 2 == 0)
		{
			count++;
		}
	}
	printf("%d\n", count);
}