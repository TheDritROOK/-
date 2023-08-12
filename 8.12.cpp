#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{//
	/*int x, y = 0;
	for (x = 0, y = 0; x < 2 && y<5; ++x, y++)
	{
		printf("hehe\n");
	}*/
	/*int x = 0;
	int y = 0;
	y++;
	++x;
	printf("%d,%d",x,y);*/

	//int i = 0;
	//int k = 0;
	//for (i = 0, k = 0; k = 1; i++, k++)
	//{
	//	k++;
	//	printf("%d", k);
	//}
	int i = 1;
	do
	{
		if (5 == i)
			break;
		printf("%d ", i);
		i++;
	} 
	while (i <= 10);
	
	return 0;

}