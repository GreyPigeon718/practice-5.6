#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int* p = (int*)malloc(40);  
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;
	return 0;
}
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}  
//	int* p2 = (int*)realloc(p, 40);
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{   
//		*(p2 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//}




//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));//效率高，但不初始化
//	int* q = (int*)calloc(10, sizeof(int));//效率较低，但完成初始化
//	if (q == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(q + i));
//		}
//	}
//	free(q);
//	q = NULL;
//	return 0; 
//}