#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
void swap_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;

	while (left<right)
	{
		// 从前往后，找到一个奇数后停止
		while (arr[left] % 2 == 1)
		{
			left++;
		}

		// 从后往前找，找一个偶数后停止
		while (arr[right] % 2 == 0)
		{
			right--;
		}

		// 如果偶数和奇数都找到，交换这两个数据的位置
		// 然后继续找，直到两个指针相遇
		if (left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;

		}
	}
}

int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = (sizeof(arr) / sizeof(arr[0]));
	int i = 0;
	printf("原数组:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	swap_arr(arr, sz);
	printf("调整之后:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}