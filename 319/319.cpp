#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1,&num2);
//	int sum = add(num1,num2);
//	printf("%d\n", sum);
//	return 0;
//}
//���� һ����ͬ����Ԫ�صļ��ϡ�
//�����ǿ��±�����ʾ��
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����Ϊint ����Ϊarr ��10������
//    //0,1,2,3,4,5,6,7,8,9   ��ʾ�±�
//    int i = 0;
//    while (i < 10)
//    {
//        printf("%d ", arr[i]);
//        i++;
//    }
//    return 0;
//}
/*char ch[5]={'a','b','c'}*///����ȫ��ʼ������������С�ڵ���5��������ʣ��Ĭ��Ϊ0

//��������+ - * / %
//int main()
//{
//	//int a = 9 / 2;
//	/*float a = 9 / 2;*/// �ڡ�/�����߶��������Ļ���ֻ������������
//	/*float a = 9 / 2.0;*///�ڡ�/����������һ����С���Ļ������ӡ��С����
//	int a = 9 % 2; //9ȡģ2��9/2=4...1,ȡ1Ϊģ�����ҲΪ1��
//	printf("%d\n", a);
//	return 0;
//
//}
//int main()
//{
//	int a = 2;
//	int b = a << 1;//a�����ƶ�һ����λ����0...010�ƶ�Ϊ0...100,Ϊ������4
//	//��ƵP18 7min
//	printf("%d\n", b);
//	return 0;
//
//}

//λ��������& ��λ�룻| ��λ��^��λ���

int main()
{	//sizeof����arr��Сʱ��arr������10int���͵�Ԫ�أ�ÿ��int����Ԫ��ռ
//4���ֽڣ��ܳ��Ⱦ���4*10��
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//����arr�ֽ�����4*10=40�ֽ�
	printf("%d\n", sizeof(arr[0]));//�±�Ϊ0��Ԫ�أ�4�ֽ�
	int sz = sizeof(arr) / sizeof(arr[0]);//����=����/������10=40/4
	printf("%d\n", sz);
	return 0;

}
