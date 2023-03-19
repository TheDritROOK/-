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
//数组 一组相同类型元素的集合。
//数组是靠下标来表示的
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//类型为int 名字为arr 有10个数。
//    //0,1,2,3,4,5,6,7,8,9   表示下标
//    int i = 0;
//    while (i < 10)
//    {
//        printf("%d ", arr[i]);
//        i++;
//    }
//    return 0;
//}
/*char ch[5]={'a','b','c'}*///不完全初始化（可以设置小于等于5个数），剩余默认为0

//操作符：+ - * / %
//int main()
//{
//	//int a = 9 / 2;
//	/*float a = 9 / 2;*/// 在“/”两边都是整数的话，只会留下整数；
//	/*float a = 9 / 2.0;*///在“/”两边任意一边是小数的话，会打印出小数。
//	int a = 9 % 2; //9取模2，9/2=4...1,取1为模，结果也为1；
//	printf("%d\n", a);
//	return 0;
//
//}
//int main()
//{
//	int a = 2;
//	int b = a << 1;//a向左移动一个单位，即0...010移动为0...100,为二进制4
//	//视频P18 7min
//	printf("%d\n", b);
//	return 0;
//
//}

//位操作符：& 按位与；| 按位或；^按位异或；

int main()
{	//sizeof计算arr大小时，arr由于有10int类型的元素，每个int类型元素占
//4个字节，总长度就是4*10；
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//整个arr字节数，4*10=40字节
	printf("%d\n", sizeof(arr[0]));//下标为0的元素，4字节
	int sz = sizeof(arr) / sizeof(arr[0]);//长度=总数/个数；10=40/4
	printf("%d\n", sz);
	return 0;

}
