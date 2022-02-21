#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<string.h>


//作业9.22
//第七题：模拟实现库函数strlen
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "love";
//	int ret = my_strlen(arr);
//	printf("%d\n",ret);
//	return 0;
//}

//第八题：模拟实现库函数strcpy
//void my_strcpy(char* des,const char* src)
//{
//	while (*des++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "love";
//	char arr2[] = {0};
//	printf("拷贝前：%s\n", arr2);
//	my_strcpy(arr2, arr1);
//	printf("拷贝后：%s\n", arr2);
//	return 0;
//}

//第九题：题目：输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
//int main()
//{
//
//	return 0;
//}

//作业9.18
//第五题：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int main()
//{
//	int money = 0;
//	printf("请输入 money = ");
//	scanf("%d",&money);
//	int total = money;   //喝的瓶数
//	int empty = money;   //空瓶数
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("你可以喝%d瓶\n",total);
//	return 0;
//}

//作业9.16
////第三题
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//第四题
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d\n,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

////第七题
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//第九题：写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
//int main()
//{
//	int arr[5] = { 0,1,2,3,4 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	return 0;
//}

//第十题：写一个函数，可以逆序一个字符串的内容
//void rvs(char* arr)
//{
//	char* left = arr;
//	char* right =  arr + strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "love";
//	printf("逆置前：%s\n",arr);
//	rvs(arr);
//	printf("逆置后：%s\n", arr);
//	return 0;
//}

//第十一题：求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int k = 0;
//	printf("请输入两个数：");
//	scanf("%d %d", &a,&n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = a + k * 10;
//		sum += k;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//第十二题：求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 99999; i++)
//	{
//		int tem = i;
//		int count = 0;
//		int sum = 0;
//		while (tem)
//		{
//			tem /= 10;//求出每一位数
//			count++;
//		}
//		tem = i;
//		while (tem)
//		{
//			sum += pow((tem % 10), count);
//			tem /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d这个数为水仙花数\n", i);
//		}
//	}
//	return 0;
//}

//第十三题：在屏幕上打印菱形
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//上半部分
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 0; j < 6 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//    //下半部分
//	for (i = 6; i > 0; i--)
//	{
//		for (j = 0; j < 7 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//整数在内存中的存储
// 注意：无符号数在以后写代码时很容易写出死循环，需要注意
//unsigned char i = 0;   //i的范围为0-255
////00000000 :0
////...
////11111111 :255
//int main()
//{
//	for (i = 0; i <= 255; i++)  //当i++变为256时，实际，里面存的值为0，又开始循环
//		//因为256:1 00000000，而i的范围只能存下后八位，所以又回到0，一直死循环，所以i<=255恒成立
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];   //char最小到-128,，所以该循环应该是-1 -- -128 -- 127 -- 0
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));   //strlen该函数找的是“\0”，而“\0”的ASCII码值为0；
//	//所以该循环的值应该为255
//	return 0;
//}

//int main()
//{
//	unsigned int i;  //无符号的整形为正值，永远>=0
//	for (i = 9; i >= 0; i--)  //该循环为死循环
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}