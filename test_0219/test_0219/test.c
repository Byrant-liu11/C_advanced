#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//��ϰ
//���ʲô��
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
//	printf("%u\n",a); //%u��ӡ�޷�������
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n",a); //%u��ӡ�޷�������
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


//��С�˴洢
//��˴洢������λ�ֽ���洢�ڸߵ�ַ��������λ�ֽ���洢�ڵ͵�ַ��
//С�˴洢������λ�ֽ���洢�ڵ͵�ַ��������λ�ֽ���洢�ڸߵ�ַ��

//2015��ٶȱ�����
//���������ֽ����С���ֽ���ĸ�����һ��С�������жϵ�ǰ�������ֽ��򡣣�10�֣�
//int main()
//{
//	int a = 1;
//	// 1 ��16���ƣ���д��2���Ʊ�ʾ��Ȼ���ĸ�������λ�ϳ�һ��
//	//0x 00 00 00 01
//	//��           ��
//	//С�˴洢
//	//01 00 00 00
//	//��˴洢
//	//00 00 00 01
//	int b = *((char*)&a);  //ǿ������ת����ת��Ϊchar*���ͣ�ֻ����һ���ֽڣ��ٽ��н�Ӧ��
//	if (b)
//		printf("С�˴洢\n");
//	else
//		printf("��˴洢\n");
//	return 0;
//}
//��װΪһ�����������ж�
//int check_sys(int a)
//{
//	return *((char*)&a);
//}
//int main()
//{
//	int a = 0;
//	printf("������һ������ ");
//	scanf("%d",&a);
//	int ret = check_sys(a);
//	if (ret == 1)
//		printf("С�˴洢\n");
//	else
//		printf("��˴洢\n");
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