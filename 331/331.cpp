#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include <windows.h>

//int main()
//{
//	char arr1[] = "welcome to bit";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = sizeof(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[right] = arr1[right];
//		arr2[left] = arr1[left];
//		printf("%s\n",arr2);
//		Sleep(500);//sleep()��һ������ӳ�500ms���֣�SҪ��д������ͷ�ļ���<windows.h>
//		system("cls");//�����Ļ��
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

using namespace System;
using namespace System::Threading;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        Console::WriteLine("Sleep for 2 seconds.");
        Thread::Sleep(2000);
    }

    Console::WriteLine("Main thread exits.");
}
