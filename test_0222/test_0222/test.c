#define _CRT_SECURE_NO_WARNINGS 1

//��ҵ9.25
//�����⣺��ӡ�������
// #include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;;
//	int arr[14][14];
//	for (i = 0; i < 14; i++)
//	{
//		for (j = 0; j <= i; j++)  //��j<i���ϰ벿�־ͻ��������
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

//�����⣺


//ָ�����

//ָ������

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
//	int* arr[3] = { arr1,arr2,arr3 };  //������ָ��������Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);  //i����arr�����飬j���ʾ���arr1,arr2,arr3�е���
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//��һ�ַ�ʽ��
//	/*char* p1 = "zhangsan";
//	char* p2 = "lisi";
//	char* p3 = "wangwu";
//
//	char* arr[] = { p1,p2,p3 };*/
//	//�ڶ��ַ�ʽ
//	char* arr[] = { "zhangsan","lisi","wangwu" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n",arr[i]);
//	}
//	return 0;
//}

//����ָ�� -ָ�� - ָ�������ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr; //��������������Ԫ�صĵ�ַ
//	//����ָ�� = ����ĵ�ַ
//	//&�������õ���������ĵ�ַ
//	int(* p)[10] = &arr; //p��������ָ�룬��ָ��ָ����һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int
//
//
//	return 0;
//}

