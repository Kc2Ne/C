 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
		int ret = 0;
		char password[20] = { 0 };
		printf("请输入密码: ");
		scanf("%s", password);
		getchar();
		printf("请确认(y/n): ");
		ret = getchar();
		if (ret == 'y')
		{
				printf("确认成功\n");
		}
		else
		{
				printf("放弃确认\n");
		}
		return 0;
}