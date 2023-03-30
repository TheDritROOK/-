#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;//1234死循环
//			//break;//1234跳出循环。
//		printf("%d ", i);
//		i++;
//	} while (i < 11);//do while，while在大括号后面，需要加上分号；
//	return 0;
//}

//阶乘计算器；
//int main()
//{
//	int i = 0;
//	printf("please entering the number of 'n':");
//	scanf("%d", &i);
//	long int j = 0;
//	for (j = 1; i > 0; i--)
//	{
//		j = j * i;
//	}
//	printf("%d", j);
//	return 0;
//}

//问：1!+2!+3!+...+10!=，
// 解法1：
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 1; i < 11; i++)
//	{
//		ret = 1;
//		for (n = 1; n <= i; n++)
//		{
//			ret *= n;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//解法2：
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n < 11; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right =sz-1 ;
//	int mid = 0;
//	int numb = 0;
//	printf("please the number(the number not over ten):");
//	scanf("%d", &numb);
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid]<numb)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > numb)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid] = numb)
//		{
//			printf("fond it,the arr is:%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("not find");
//	return 0;
//}