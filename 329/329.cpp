#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	char password[20] = {0};//����������Ҫ��char����
	printf("please entering the password:");
	scanf("%s", password);//%s����������ַ����ı�ʾ������password�����飬����Ҫ�򡮡���
	//scanf�ڴӻ���������ַ���ʱ�������ո�ͻ�ֹͣ��
	printf("please reconfirm the password(Y/N):");
	int ps = 0;
	while ((ps = getchar())!='\n')//��getchar����ȡ�ڻ�����scanfδ��ȡ���ַ�����
     //����getcharһ��ֻ�ܻ��һ���ַ�����������Ҫ����whileѭ����һֱѭ����\nΪֹ��
	//ע��getchar��Ȼ��ȡ�����ַ��������Ƿ��ص������Σ�����Ϊ�ַ����ڼ���������԰�˹�����ʾ�ģ���
	//��˹����������Σ�������ġ�\n'�س�Ҳ�����Σ���Ҫ�õ�����������
	{
		;//Ŀ�������������������ݣ�����getchar����ַ����󲢲�ʹ�ã�����ѭ������Ϊ����䣻
	}
	int ch = getchar();
	if (ch == 'Y')//YΪ�ַ�����������Ҫ������
	{
		printf("confirm success\n");
	}
	else
	{
		printf("confirm faild\n");
	}
	return 0;
}

int main()
{
	char password[20] = { 0 };
	printf("please entering the password:");
	scanf("%s", password);
	printf("please recomfirm the password(Y/N):");
	int ch = getchar();//�ô���getcharֻ�����˻�������һ���ַ������������ո�����ַ���ʱ���޷�������
	if (ch == 'Y')
	{
		printf("The password confirm success\n");
	}
	else
	{
		printf("The password confirm failed\n");
	}
	return 0;
}*/

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("xi\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int a = i+i;
//	printf("%d,%d\n",i,a);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9') // ||Ϊ���ߡ�
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//for���
//1.����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//for(��ʼ�����жϣ�������
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//2.ע��
//int main()
//{
//	int i = 0;
//	for (i = 0;; i++)//��for������������ʽ������Ϊ0���������׳��ֱ�ʣ��������ڱ��ʽ�������ո�
//		printf("%d ", i);
//	return 0;
//}

//3.ע��
//int main()
//{
//	int i = 0;
//	for (i = 0; i = 1; i++)//�ж�����еı��ʽ�����жϱ��ʽ���������i=1�Ǹ�ֵ���ᵼ��iһֱ��ֵ����ѭ��
//		printf("%d ", i);
//	return 0;
//}

//4.ע��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3;j++)
//			printf("xixi\n");
//	}
//	return 0;
//}

//5.for����е�break��continue
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;//��forѭ���е�continue����������������ص�for�����е��ж�express2��ȥ�����Դ�ӡ��
//		//12346789����һ��5��
//			//break;//��forѭ���г���breakʱ���������ѭ��������ѭ����
//		printf("%d\n",i);
//	}
//	return 0;
//}

//6.�������飺
//��1��������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ���ơ�
//��2������for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱��д����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//��2������forѭ���������ڣ��ڵ�һ�����ʽ�õ��ǵȺ�=����Ϊǰ�գ�
//		//�ڵڶ������ʽ���õ���С�ڷ���<����Ϊ�󿪡�
//	{
//		printf("%d\n", i);
//		int j = 0;
//		for (j = 0; j < 10; i++)//��1���������ڲ���forѭ�����޸����ⲿforѰ��ѭ������i�������ڲ�for������
//			//ѭ����
//		{
//			printf("%d\n", j);
//		}
//	}
//	return 0;
//}

//����forѭ���ı���
//1��
//int main()
//{
//	for (;;)//exp1Ĭ�ϴ�0��ʼ��exp2���жϣ�epx3��һֱ��1��
//	{
//		printf("xixi\n");
//	}
//	return 0;
//}
//2.
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//forѭ���б��ʽ�ԣ��ֺ�Ϊ��
//	{
//		printf("xixi\n");
//	}
//	return 0;
//}

//���⣺������ѭ����ѭ�����ٴΡ�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//exp2�е���䲻���жϾ䣬���Բ������ѭ����
//		k++;
//	return 0;
//}