#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
extern int g;
int main()
{
	printf("%d", g);
}