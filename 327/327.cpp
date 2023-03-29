//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////int main()
////{
////	int i = 0;
////	while (i <= 100)
////	{
////		if (i % 2 == 1)
////			printf("%d\n", i);
////		i++;
////		
////	}
////	return 0;
////}
//
////int main()
////{
////	int i = 4;
////	if (i == 0)//当这个if语句不满足时，后面的if语句也不会执行。
////	{//为了方面直观，建议常用大括号来表示内部内容
////		if (i == 4)
////			printf("le\n");
////		else                //else只会对最近的if产生反应
////			printf("fou\n");
////		    printf("xx\n");
////	}
////}
//
//int main()
//{
//	int i = 4;
//	if (i == 4)
//		if (i == 4)
//			printf("le\n");
//		else
//		{
//			printf("fou\n");
//			printf("xx\n");
//		}
//}//该结果会输出le和xx，是因为else语句只会默认一条语句，若需要把两条语句整合在一起则需要大括号。