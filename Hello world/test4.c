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
//	int b = a++;  //后置++，先使用，再加。先把a的值给b，b等于10，然后a再加1，a等于11.
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
//	 int a = 1;//加上sattic,a是一个静态的局部变量  
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