#define _CRT_SECURE_NO_WARNINGS 1
////ʵ��һ�������������ð������
//#include <stdio.h>
//void BubbleSort(int arr[], int size)
//{
//	for (int i = 0; i < size ; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, size);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

////����һ���������飬��ɶ�����Ĳ���
////1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
////2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
////3.ʵ��reverse()  �����������Ԫ�ص����á�
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#include <stdio.h>
//void init(int arr[], int sz,int set)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int set = 0;
//	init(arr, sz, set);
//	print(arr, sz);
//	reverse(arr,sz);
//
//	return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include <stdio.h>
int main()
{
	int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int tmp = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		printf("%d ", arr2[i]);
	}
	printf("\n");
	return 0;
}