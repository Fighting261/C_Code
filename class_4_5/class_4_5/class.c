#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	//��srcָ����ַ���������destָ��Ŀռ��У�����'\0'
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//����Ŀ�ĵص���ʼ��ַ
}

int main()
{
	char arr1[20] = "##########";
	char arr2[] = "abcdefg";
	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}