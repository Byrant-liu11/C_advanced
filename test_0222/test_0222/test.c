#define _CRT_SECURE_NO_WARNINGS 1

//作业9.25
//第六题：打印杨辉三角
// #include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;;
//	int arr[14][14];
//	for (i = 0; i < 14; i++)
//	{
//		for (j = 0; j <= i; j++)  //若j<i，上半部分就会出现乱码
//		{
//			if (i == j || j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 14; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//第七题：


//指针进阶

//指针数组

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", * (arr[i]));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int arr3[] = { 7,8,9 };
//	int* arr[3] = { arr1,arr2,arr3 };  //数组名指向数组首元素地址
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);  //i访问arr中数组，j访问具体arr1,arr2,arr3中的数
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//第一种方式：
//	/*char* p1 = "zhangsan";
//	char* p2 = "lisi";
//	char* p3 = "wangwu";
//
//	char* arr[] = { p1,p2,p3 };*/
//	//第二种方式
//	char* arr[] = { "zhangsan","lisi","wangwu" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n",arr[i]);
//	}
//	return 0;
//}

//数组指针 -指针 - 指向数组的指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr; //数组名是数组首元素的地址
//	//数组指针 = 数组的地址
//	//&数组名拿到的是数组的地址
//	int(* p)[10] = &arr; //p就是数组指针，该指针指向了一个数组，数组10个元素，每个元素的类型是int
//
//
//	return 0;
//}

