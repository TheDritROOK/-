#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//static修饰局部变量
//void test()
//{
//	/*int a = 1;*/  
//	static int a = 1;//使用static来使得int从栈区转移到静区，从而改变了存储类型，使得元素a
//	//不再是再循环内生存，出循环后取消；变为进循环后生存，出循环后保留数据，下次进循环后继续
//	//使用，从而延长了函数的生命周期。
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}

//static修饰全局变量
//使得这个全局变量只能在自己所在的源文件（.c）内部使用，其他文件不能使用。
//extern是声明外部符号的
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
//int main()
//{
//
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//int au = 2001;