 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
		int ret = 0;
		char password[20] = { 0 };
		printf("����������: ");
		scanf("%s", password);
		getchar();
		printf("��ȷ��(y/n): ");
		ret = getchar();
		if (ret == 'y')
		{
				printf("ȷ�ϳɹ�\n");
		}
		else
		{
				printf("����ȷ��\n");
		}
		return 0;
}