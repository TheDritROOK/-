#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	/*int b = a++;*///后置++，表示b先等于a，然后a在+1；10
//	int b = ++a;//前置++，表示a先+1，再等于b；11
//	printf("%d\n",b);
//	return 0;
//}

//int main()
//{
//	//强制转换类型
//	int a = (int)3.14;//由于3.14为双精度的浮点数，需要使用double类型来表示，用int表示时会导致
//	//3.14去掉小数点后的数字，输出结果为3.使用（int）后可以强制转换类型。
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{ //逻辑操作符
//	int a = 0;
//	int b = 0;
//	/*int c = a && b;*///&&并且符，当两者都为真输出1，一则假或全假输出0
//	int c = a || b;//||或符，当两者只要有一个为真输出1，全假才输出0
//	printf("%d\n", c);
//	return 0;
//}

//条件操作符（三目操作符）
//exp1 ? exp2 : exp3
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = a > b ? a : b;
//	//如果exp1（a>b）?则使用epx2的算法计算结果，反之用epx3来计算结果；
//	printf("%d\n", max);
//	return 0;
//}

//逗号表达式
int main()
{
	int a = 0;
	int b = 2;
	int c = 5;
	int f = 3;
	int d = (b = a + c, c = b + c, f = c + 2);
	//（，，）像这类在括号类用逗号隔开的表达式，叫逗号表达式，从左到右计算
	printf("%d\n", d);
	return 0;
}