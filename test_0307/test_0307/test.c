#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����ָ�� - ָ��
//ָ�������ָ��
//
//int* p;p��һ��ָ�����ε�ָ��
//char* pc;pc��һ��ָ���ַ���ָ��

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	int arr[5] = { 1,2,3,4,5 };
//	int(*p)[5] = &arr;//&arr�õ���������ĵ�ַ
//
//	//pa����һ������ָ�룬��ָ��ָ��һ�����飬������5��Ԫ�أ�ÿ��Ԫ�ص�������int
//	//����ĵ�ַ�ͷ�������ָ������ȥ
//	//&arr - ����ĵ�ַ
//	//arr+1 ����һ��Ԫ��
//	//&arr+1 ����һ��������
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	/*int(*p)[10] = &arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",(*p)[i]);
//	}*/
//	return 0;
//}


//����ָ���ʹ�ã�һ�㳣���ڶ�ά����
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ",*(arr + i));
//	}
//}
//void print2(int(*p)[5],int x,int y)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	/*int arr2[] = {1,2,3,4,5,6};
//	print(arr2, 6);*/
//
//
//	return 0;
//}


//�������Ǻ����ĵ�ַ
//&���������Ǻ����ĵ�ַ
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//����ָ�룬������������Ԫ�أ�Ҳ����ָ����
//	int (*pf)(int, int) = &Add; 
//	//����ָ��ĵ���
//	int sum = (*pf)(2, 3);
//	printf("%d\n",sum);
//	return 0;
//}