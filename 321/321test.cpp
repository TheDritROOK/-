#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern int add(int, int);
//ʹ��extern�����ⲿ����ʱ����Ҫ�Ѻ������ͣ��Լ������ڲ�Ԫ�ص�����д����
int main()
{

	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1,&num2);
	int sum = add(num1,num2);
	printf("%d\n", sum);
	return 0;
}
//extern int au;
//int main()
//{
//	printf("%d", au);
//	return 0;
//}