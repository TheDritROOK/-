#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	/*int b = a++;*///����++����ʾb�ȵ���a��Ȼ��a��+1��10
//	int b = ++a;//ǰ��++����ʾa��+1���ٵ���b��11
//	printf("%d\n",b);
//	return 0;
//}

//int main()
//{
//	//ǿ��ת������
//	int a = (int)3.14;//����3.14Ϊ˫���ȵĸ���������Ҫʹ��double��������ʾ����int��ʾʱ�ᵼ��
//	//3.14ȥ��С���������֣�������Ϊ3.ʹ�ã�int�������ǿ��ת�����͡�
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{ //�߼�������
//	int a = 0;
//	int b = 0;
//	/*int c = a && b;*///&&���ҷ��������߶�Ϊ�����1��һ��ٻ�ȫ�����0
//	int c = a || b;//||�����������ֻҪ��һ��Ϊ�����1��ȫ�ٲ����0
//	printf("%d\n", c);
//	return 0;
//}

//��������������Ŀ��������
//exp1 ? exp2 : exp3
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = a > b ? a : b;
//	//���exp1��a>b��?��ʹ��epx2���㷨����������֮��epx3����������
//	printf("%d\n", max);
//	return 0;
//}

//���ű��ʽ
int main()
{
	int a = 0;
	int b = 2;
	int c = 5;
	int f = 3;
	int d = (b = a + c, c = b + c, f = c + 2);
	//�����������������������ö��Ÿ����ı��ʽ���ж��ű��ʽ�������Ҽ���
	printf("%d\n", d);
	return 0;
}