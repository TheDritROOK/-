#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//switch����г����÷�1������1-7�����ڼ���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch����������ֻ����������
//	{
//	case 1://case����Ҳֻ����������
//		printf("����1\n");
//		break;//break������һ����֧��ɺ���ϣ�����������֧���������������������С�
//	case 2:
//		printf("����2\n");
//		break;
//	}
//	return 0;
//
//}

//����1-5Ϊ�����գ�67����Ϣ�ա�switch�����break���÷�2
/*/int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default://Ĭ�ϣ������������error
		printf("error\n");
		break;//ͬ����һ��������֧����Ҫbreak
	}
}*/

/*int main()
{
	int i = 0;
	while (i<=10)//whlie��䣬��while����Ĵ������ڳ���ѭ����ֱ�����������������ѭ����
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}*/

/*int main()
{
	int i = 0;
	while (i <= 10)
	{
		if (i == 5)
			break;//��while����е�break��ʾ�ж�ѭ����
		printf("%d ", i);
			i++;
	}
	return 0;
}*/

/*int main()
{
	int i = 0;
	while (i <= 10)
	{
		if (i == 5)
			continue;//��while�е�continue����ʾ����continue����Ĵ��룬�����жϲ��ֽ����ж�
		//�ڸ�ʾ����i=5�󣬻����ص�while�ж��У����������ߣ��ٽ���if�жϵ�continue�У��ٻص�while��
		//���ν��г�Ϊ��ѭ����
		printf("%d ", i);
		i++;
	}
	return 0;
}*/

//getchar��putchar
/*int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//getchar��ʾ�Ӽ��̻���ַ�����get charater.!=��ʾ�������ڡ� ��EOF��ʾ
		//end of file�ļ���������ʾ�ڻ��-1ʱ������������ʱ��ctrl+z��Ϊ-1.
	{
		//putchar(ch);//putchar()��ʾ����ַ�����put charater.
		printf("%c", ch);//����ʹ��putchar��ch�����
	}
	return 0;
}*/