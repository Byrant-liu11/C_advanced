#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	//return NULL;
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	char* (*pf)(char*,const char*) = &my_strcpy;
//	(*pf)(arr1, arr2);
//
//	printf("%s\n",arr1);
//
//	return 0;
//}

//利用函数指针数组完成计算器的设计

//void menu()
//{
//	printf("******************************\n");
//	printf("******** 1.add  2.sub ********\n");
//	printf("******** 3.mul  4.div ********\n");
//	printf("********    0.exit    ********\n");
//	printf("******************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数： ");
//			scanf("%d %d ",&x,&y);
//			ret = add(x, y);
//			printf("结果是：%d\n",ret);
//			break;
//		case 2:
//			printf("请输入两个操作数： ");
//			scanf("%d %d ", &x, &y);
//			ret = sub(x, y);
//			printf("结果是：%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数： ");
//			scanf("%d %d ", &x, &y);
//			ret = mul(x, y);
//			printf("结果是：%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数： ");
//			scanf("%d %d ", &x, &y);
//			ret = div(x, y);
//			printf("结果是：%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器！\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//改进，使用函数指针数组的方式优化原代码
//void menu()
//{
//	printf("******************************\n");
//	printf("******** 1.add  2.sub ********\n");
//	printf("******** 3.mul  4.div ********\n");
//	printf("********    0.exit    ********\n");
//	printf("******************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int(*pfarr[])(int, int) = { 0,add,sub,mul,div};
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("结果为：%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int(*pf)(int, int);//函数指针
//	int(*pfarr[5])(int, int);//函数指针数组
//	int(*(*pparr)[5])(int, int) = &pfarr;//指向函数指针数组的指针
//	return 0;
//}

//回调函数
//void menu()
//{
//	printf("******************************\n");
//	printf("******** 1.add  2.sub ********\n");
//	printf("******** 3.mul  4.div ********\n");
//	printf("********    0.exit    ********\n");
//	printf("******************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//
//	printf("请输入两个操作数： ");
//	scanf("%d %d ", &x, &y);
//	ret = pf(x, y);
//	printf("结果是：%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("退出计算器！\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}