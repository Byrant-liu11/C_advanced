#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//练习
//输出什么？
int main()
{
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);
	return 0;
}

//int main()
//{
//	char a = 128;
//	printf("%u\n",a); //%u打印无符号整形
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n",a); //%u打印无符号整形
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d\n",a,b,c);
//	return 0;
//}


//大小端存储
//大端存储：将低位字节序存储在高地址处，将高位字节序存储在低地址处
//小端存储：将低位字节序存储在低地址处，将高位字节序存储在高地址处

//2015年百度笔试题
//请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序。（10分）
//int main()
//{
//	int a = 1;
//	// 1 的16进制，先写出2进制表示，然后四个二进制位合成一个
//	//0x 00 00 00 01
//	//低           高
//	//小端存储
//	//01 00 00 00
//	//大端存储
//	//00 00 00 01
//	int b = *((char*)&a);  //强制类型转换，转换为char*类型，只访问一个字节，再进行解应用
//	if (b)
//		printf("小端存储\n");
//	else
//		printf("大端存储\n");
//	return 0;
//}
//封装为一个函数进行判断
//int check_sys(int a)
//{
//	return *((char*)&a);
//}
//int main()
//{
//	int a = 0;
//	printf("请输入一个数： ");
//	scanf("%d",&a);
//	int ret = check_sys(a);
//	if (ret == 1)
//		printf("小端存储\n");
//	else
//		printf("大端存储\n");
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}