#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//switch语句中常见用法1，输入1-7是星期几。
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch（）括号内只能输入整形
//	{
//	case 1://case后面也只能输入整形
//		printf("星期1\n");
//		break;//break必须在一个分支完成后加上，结束该条分支，否则语句会依次向下运行。
//	case 2:
//		printf("星期2\n");
//		break;
//	}
//	return 0;
//
//}

//输入1-5为工作日，67是休息日。switch语句中break的用法2
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
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default://默认，其他情况输入error
		printf("error\n");
		break;//同样是一条条件分支，需要break
	}
}*/

/*int main()
{
	int i = 0;
	while (i<=10)//whlie语句，在while下面的大括号内持续循环，直到条件不满足后跳出循环。
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
			break;//在while语句中的break表示中断循环。
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
			continue;//在while中的continue语句表示跳过continue下面的代码，跳回判断部分进行判断
		//在该示例中i=5后，回跳回到while判断中，继续往下走，再进行if判断到continue中，再回到while中
		//依次进行成为死循环。
		printf("%d ", i);
		i++;
	}
	return 0;
}*/

//getchar与putchar
/*int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//getchar表示从键盘获得字符串：get charater.!=表示“不等于” 而EOF表示
		//end of file文件结束，表示在获得-1时结束，在输入时，ctrl+z，为-1.
	{
		//putchar(ch);//putchar()表示输出字符串：put charater.
		printf("%c", ch);//可以使用putchar（ch）替代
	}
	return 0;
}*/