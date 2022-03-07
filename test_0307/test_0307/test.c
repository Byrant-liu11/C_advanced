#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//数组指针 - 指针
//指向数组的指针
//
//int* p;p是一个指向整形的指针
//char* pc;pc是一个指向字符的指针

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	int arr[5] = { 1,2,3,4,5 };
//	int(*p)[5] = &arr;//&arr拿到的是数组的地址
//
//	//pa就是一个数组指针，该指针指向一个数组，数组有5个元素，每个元素的类型是int
//	//数组的地址就放在数组指针里面去
//	//&arr - 数组的地址
//	//arr+1 跳过一个元素
//	//&arr+1 跳过一整个数组
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


//数组指针的使用，一般常见于二维数组
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


//函数名是函数的地址
//&函数名还是函数的地址
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//函数指针，函数中有两个元素，也必须指出。
//	int (*pf)(int, int) = &Add; 
//	//函数指针的调用
//	int sum = (*pf)(2, 3);
//	printf("%d\n",sum);
//	return 0;
//}