#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<string.h>


//��ҵ9.22
//�����⣺ģ��ʵ�ֿ⺯��strlen
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

//�ڰ��⣺ģ��ʵ�ֿ⺯��strcpy
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
//	printf("����ǰ��%s\n", arr2);
//	my_strcpy(arr2, arr1);
//	printf("������%s\n", arr2);
//	return 0;
//}

//�ھ��⣺��Ŀ������һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
//int main()
//{
//
//	return 0;
//}

//��ҵ9.18
//�����⣺����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//int main()
//{
//	int money = 0;
//	printf("������ money = ");
//	scanf("%d",&money);
//	int total = money;   //�ȵ�ƿ��
//	int empty = money;   //��ƿ��
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("����Ժ�%dƿ\n",total);
//	return 0;
//}

//��ҵ9.16
////������
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

//������
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d\n,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

////������
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//�ھ��⣺дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
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

//��ʮ�⣺дһ����������������һ���ַ���������
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
//	printf("����ǰ��%s\n",arr);
//	rvs(arr);
//	printf("���ú�%s\n", arr);
//	return 0;
//}

//��ʮһ�⣺��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int k = 0;
//	printf("��������������");
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

//��ʮ���⣺���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
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
//			tem /= 10;//���ÿһλ��
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
//			printf("%d�����Ϊˮ�ɻ���\n", i);
//		}
//	}
//	return 0;
//}

//��ʮ���⣺����Ļ�ϴ�ӡ����
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//�ϰ벿��
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
//    //�°벿��
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


//�������ڴ��еĴ洢
// ע�⣺�޷��������Ժ�д����ʱ������д����ѭ������Ҫע��
//unsigned char i = 0;   //i�ķ�ΧΪ0-255
////00000000 :0
////...
////11111111 :255
//int main()
//{
//	for (i = 0; i <= 255; i++)  //��i++��Ϊ256ʱ��ʵ�ʣ�������ֵΪ0���ֿ�ʼѭ��
//		//��Ϊ256:1 00000000����i�ķ�Χֻ�ܴ��º��λ�������ֻص�0��һֱ��ѭ��������i<=255�����
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];   //char��С��-128,�����Ը�ѭ��Ӧ����-1 -- -128 -- 127 -- 0
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));   //strlen�ú����ҵ��ǡ�\0��������\0����ASCII��ֵΪ0��
//	//���Ը�ѭ����ֵӦ��Ϊ255
//	return 0;
//}

//int main()
//{
//	unsigned int i;  //�޷��ŵ�����Ϊ��ֵ����Զ>=0
//	for (i = 9; i >= 0; i--)  //��ѭ��Ϊ��ѭ��
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}