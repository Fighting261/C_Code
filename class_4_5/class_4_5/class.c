#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	//把src指向的字符串拷贝到dest指向的空间中，包含'\0'
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//返回目的地的起始地址
}

int main()
{
	char arr1[20] = "##########";
	char arr2[] = "abcdefg";
	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}