#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr1[] = "abc"; //字符串后面有个\0结束标志，不算作字符串内容
	char arr2[] = { 'a','b','c',0 };
	printf("%s\n", arr1);
	printf("%s\n", arr2 );
	return 0;
}

