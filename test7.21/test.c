#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//
//}

//int main()
//{
//	/*int arr[3][4] = { { 1,2,3}, {4, 5 }};*/
//	return 0;
//}
int main()
{
	int i = 0;
	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
		}
	}

return 0;
}
