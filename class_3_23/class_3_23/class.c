#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
////二分法
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int i = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int k = 6;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}			
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到了\n");
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//猜数字小游戏
void menu()
{
	printf("****************************\n");
	printf("********1.开始游戏**********\n");
	printf("********0.退出游戏**********\n");
	printf("****************************\n");
}
void game()
{
	int guess = 0;
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字：->");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		    break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		    break;
		}
	} while (input);

	return 0;
}
