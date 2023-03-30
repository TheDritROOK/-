#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	char password[20] = {0};//数组类型需要用char类型
	printf("please entering the password:");
	scanf("%s", password);//%s是输入输出字符串的表示，由于password是数组，不需要打‘’。
	//scanf在从缓存区获得字符串时，遇到空格就会停止。
	printf("please reconfirm the password(Y/N):");
	int ps = 0;
	while ((ps = getchar())!='\n')//用getchar来获取在缓存区scanf未读取的字符串，
     //由于getchar一次只能获得一个字符串，所以需要做出while循环，一直循环到\n为止。
	//注：getchar虽然获取的是字符串，但是返回的是整形，是因为字符串在计算机中是以阿斯克码表示的，而
	//阿斯克码就是整形；且这里的‘\n'回车也是整形，需要用单引号引出。
	{
		;//目的是消除缓存区的数据，所以getchar获得字符串后并不使用，所以循环内容为空语句；
	}
	int ch = getchar();
	if (ch == 'Y')//Y为字符串，所以需要单引号
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
	int ch = getchar();//该处的getchar只消除了缓存区的一个字符串，当遇到空格或多个字符串时候无法消除。
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
//		if (ch < '0' || ch>'9') // ||为或者。
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//for语句
//1.基础
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//for(初始化；判断；调整）
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//2.注意
//int main()
//{
//	int i = 0;
//	for (i = 0;; i++)//在for语句中三个表达式都可以为0，但是容易出现变故，不建议在表达式处留出空格。
//		printf("%d ", i);
//	return 0;
//}

//3.注意
//int main()
//{
//	int i = 0;
//	for (i = 0; i = 1; i++)//判断语句中的表达式得是判断表达式，在这里的i=1是赋值，会导致i一直赋值到死循环
//		printf("%d ", i);
//	return 0;
//}

//4.注意
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

//5.for语句中的break与continue
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;//在for循环中的continue，会跳过下面的语句回到for括号中的判断express2中去，所以打印出
//		//12346789，少一个5；
//			//break;//在for循环中出现break时，会结束该循环，跳出循环；
//		printf("%d\n",i);
//	}
//	return 0;
//}

//6.两条建议：
//（1）不可在for循环体内修改循环变量，防止for循环失去控制。
//（2）建议for语句的循环控制变量的取值采用“前闭后开区间”的写法。
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//（2）这里for循环的括号内，在第一个表达式用的是等号=，即为前闭，
//		//在第二个表达式中用的是小于符号<，即为后开。
//	{
//		printf("%d\n", i);
//		int j = 0;
//		for (j = 0; j < 10; i++)//（1）由于在内部的for循环中修改了外部for寻的循环变量i，导致内部for出现死
//			//循环。
//		{
//			printf("%d\n", j);
//		}
//	}
//	return 0;
//}

//两种for循环的变种
//1。
//int main()
//{
//	for (;;)//exp1默认从0开始，exp2无判断，epx3会一直加1；
//	{
//		printf("xixi\n");
//	}
//	return 0;
//}
//2.
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//for循环中表达式以；分号为界
//	{
//		printf("xixi\n");
//	}
//	return 0;
//}

//例题：问下列循环会循环多少次。
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//exp2中的语句不是判断句，所以不会出现循环。
//		k++;
//	return 0;
//}