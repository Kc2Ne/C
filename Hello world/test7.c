#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int age = 0;
//	scanf("age = %d\n", &age);
//	if (age < 18)
//		printf("Î´³ÉÄê\n");
//	return 0;
//}

//int main()
//{
//	int i  = 1;
//	while (i <= 100)
//	 {
//			if (i % 2 == 1)
//				printf("%d ", i);
//			i++;
//	 }
//		return 0;	
//}

//int main()
//{
//		int n = 1;
//		int m = 2;
//		switch (n)
//		{
//		case 1: 
//				m++;
//		case 2: 
//				n++;
//		case 3:
//				switch (n)
//				{
//				case 1: 
//						n++;
//				case 2: 
//						m++;
//						n++;
//						break;
//				}
//		case 4: 
//				m++;
//				break;
//		default:
//				break;
//		}
//		printf("m = %d, n = %d\n", m, n);
//		return 0;
//}

//int main()
//{
//		int i = 1;
//		while (i <= 10)
//		{
//				printf("%d", i);
//				i++;
//		}
//		return 0;
//}

int main()
{
		int ch = 0;
		while ((ch = getchar()) != EOF)
		{
				putchar(ch);
		}
		return 0;
}
