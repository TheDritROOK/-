#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//static���ξֲ�����
//void test()
//{
//	/*int a = 1;*/  
//	static int a = 1;//ʹ��static��ʹ��int��ջ��ת�Ƶ��������Ӷ��ı��˴洢���ͣ�ʹ��Ԫ��a
//	//��������ѭ�������棬��ѭ����ȡ������Ϊ��ѭ�������棬��ѭ���������ݣ��´ν�ѭ�������
//	//ʹ�ã��Ӷ��ӳ��˺������������ڡ�
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

//static����ȫ�ֱ���
//ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���.c���ڲ�ʹ�ã������ļ�����ʹ�á�
//extern�������ⲿ���ŵ�
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