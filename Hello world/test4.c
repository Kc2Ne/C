#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;  //����++����ʹ�ã��ټӡ��Ȱ�a��ֵ��b��b����10��Ȼ��a�ټ�1��a����11.
//	printf("%d\n%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
// }
 
//int test()
//{
//	 int a = 1;//����sattic,a��һ����̬�ľֲ�����  
//	a++;
//	printf("%d\n", a);
//	return a;
//}
//int main()
//{ 
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
// }

//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//#define MAX(x , y) (x > y ? x : y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//		printf("%p\n", &a);
//	return 0;
// }

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(int *));
	return 0;
}