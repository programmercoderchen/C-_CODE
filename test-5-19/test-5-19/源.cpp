#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#define N 10
//void maxmin(int arr[10], int *pt1,int *pt2,int n)
//{
//	int i;
//	*pt1 = *pt2 = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]>*pt1)
//			*pt1 = arr[i];
//		if (arr[i] < *pt2)
//			*pt2 = arr[i];
//	}
//}
//void main()
//{
//	int array[N] = { 10, 7, 19, 29, 4, 0, 7, 35, -16, 21 };
//	int a = 0;
//	int b = 0;
//	int* p1 = &a; 
//	int* p2 = &b;
//	maxmin(array, p1, p2, N);
//	printf("max=%d,min=%d", a, b);
//}

//#include <stdio.h>
//
//void sort(int* array, int n)
//{
//	{
//		int i, j = 0;
//		for (i = 0; i<n - 1; i++)
//		{
//			for (j = 0; j<n - 1 - i; j++)
//			{
//				if (array[j]>array[j + 1])
//				{
//					int tmp = array[j];
//					array[j] = array[j + 1];
//					array[j + 1] = tmp;
//				}
//			}
//		}
//		for (i = 0; i<n; i++)
//		{
//
//			printf("%d ", array[i]);
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int b[100] = { 0 };
//	scanf_s("%d", &i);
//	for (j = 0; j<i; j++)
//	{
//		scanf_s("%d", &b[i]);
//	}
//	sort(b, i);
//	return 0;
//}

#include <stdio.h>
#include <errno.h>
#include <string.h>
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n",strerror(errno));
		return 0;
	}
	for (i = 1; i <= 20; i++)
	{
		fputc(i, pf);
	}
	for (j = 1; j < 20; j++)
	{
		sum += j;
	}
	fputc(sum, pf);
	fclose(pf);
	pf = NULL;
}