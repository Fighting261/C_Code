#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
void swap_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;

	while (left<right)
	{
		// ��ǰ�����ҵ�һ��������ֹͣ
		while (arr[left] % 2 == 1)
		{
			left++;
		}

		// �Ӻ���ǰ�ң���һ��ż����ֹͣ
		while (arr[right] % 2 == 0)
		{
			right--;
		}

		// ���ż�����������ҵ����������������ݵ�λ��
		// Ȼ������ң�ֱ������ָ������
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
	printf("ԭ����:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	swap_arr(arr, sz);
	printf("����֮��:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}