#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//指针
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&字符表示元素的地址；p是专门打印地址的
//	printf("%d\n", sizeof(int*));//64位计算机的字符类型都占8字节，32位为4字节
//	int* pa = &a;
//	*pa = 20;//*解引操作符，*pa就是通过pa里面的地址来找到a的数据；
//	printf("%d", a);
//	return 0;
//}

//结构体可以让c语音创建一个新的类型出来。

struct Stu//用struct来创建一个叫 Su的类型,首字母要大写。
{
	char name[20];//char类型，名字为name，有20个bit位,name,age,score都是Stu的成员变量。
	int age;//int类型，名字为age；
	float score;//float类型，名字为score
};
int main()
{
	struct Stu a = { "张三",20,80.5 };//由于张三为字符串，所以需要使用“”来标记。
	printf("Express1:%s,%d,%f\n", a.name, a.age, a.score);//用a.来找到结构体的成员变量
	struct Stu* pa = &a;
	printf("Express2:%s,%d,%f\n", (*pa).name, (*pa).age, (*pa).score);//用指针来表示，注意加上（*）
	printf("Express3:%s,%d,%f\n", pa->name, pa->age, pa->score);//用箭头表示后，不需要加上（*）
	return 0;
}