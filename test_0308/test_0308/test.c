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

//���ú���ָ��������ɼ����������

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
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			printf("������������������ ");
//			scanf("%d %d ",&x,&y);
//			ret = add(x, y);
//			printf("����ǣ�%d\n",ret);
//			break;
//		case 2:
//			printf("������������������ ");
//			scanf("%d %d ", &x, &y);
//			ret = sub(x, y);
//			printf("����ǣ�%d\n", ret);
//			break;
//		case 3:
//			printf("������������������ ");
//			scanf("%d %d ", &x, &y);
//			ret = mul(x, y);
//			printf("����ǣ�%d\n", ret);
//			break;
//		case 4:
//			printf("������������������ ");
//			scanf("%d %d ", &x, &y);
//			ret = div(x, y);
//			printf("����ǣ�%d\n", ret);
//			break;
//		case 0:
//			printf("�˳���������\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//�Ľ���ʹ�ú���ָ������ķ�ʽ�Ż�ԭ����
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("���Ϊ��%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int(*pf)(int, int);//����ָ��
//	int(*pfarr[5])(int, int);//����ָ������
//	int(*(*pparr)[5])(int, int) = &pfarr;//ָ����ָ�������ָ��
//	return 0;
//}

//�ص�����
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
//	printf("������������������ ");
//	scanf("%d %d ", &x, &y);
//	ret = pf(x, y);
//	printf("����ǣ�%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
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
//			printf("�˳���������\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}