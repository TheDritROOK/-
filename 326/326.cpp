#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ָ��
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&�ַ���ʾԪ�صĵ�ַ��p��ר�Ŵ�ӡ��ַ��
//	printf("%d\n", sizeof(int*));//64λ��������ַ����Ͷ�ռ8�ֽڣ�32λΪ4�ֽ�
//	int* pa = &a;
//	*pa = 20;//*������������*pa����ͨ��pa����ĵ�ַ���ҵ�a�����ݣ�
//	printf("%d", a);
//	return 0;
//}

//�ṹ�������c��������һ���µ����ͳ�����

struct Stu//��struct������һ���� Su������,����ĸҪ��д��
{
	char name[20];//char���ͣ�����Ϊname����20��bitλ,name,age,score����Stu�ĳ�Ա������
	int age;//int���ͣ�����Ϊage��
	float score;//float���ͣ�����Ϊscore
};
int main()
{
	struct Stu a = { "����",20,80.5 };//��������Ϊ�ַ�����������Ҫʹ�á�������ǡ�
	printf("Express1:%s,%d,%f\n", a.name, a.age, a.score);//��a.���ҵ��ṹ��ĳ�Ա����
	struct Stu* pa = &a;
	printf("Express2:%s,%d,%f\n", (*pa).name, (*pa).age, (*pa).score);//��ָ������ʾ��ע����ϣ�*��
	printf("Express3:%s,%d,%f\n", pa->name, pa->age, pa->score);//�ü�ͷ��ʾ�󣬲���Ҫ���ϣ�*��
	return 0;
}