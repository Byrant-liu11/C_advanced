#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.sizeof(������),�������������ʾ�������飬���������������Ĵ�С
//2.&���������������������ʾ�������飬ȡ��������������ĵ�ַ
//3.����֮�����е�����������ʾ��Ԫ�صĵ�ַ
//int main()
//{
//	//һά����
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0]));
//	printf("%d\n", sizeof(&a[0] + 1));
//
//	//�ַ�����
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(p + 1));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p + 1));
//	printf("%d\n", sizeof(&p[0] + 1));
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 1));
//	printf("%d\n", strlen(*p));
//	printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//
//	return 0;
//}

//ָ�������
//1��
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//2���ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100000+20=0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}

//3��
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//4��
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//�ڲ��Ƕ��ű��ʽ
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//5��
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//6��
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//7��
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//8��
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//�ַ������ַ�������

//strlen
// size_t strlen ( const char * str );
//�ַ����Ѿ�'\0' ��Ϊ������־��strlen�������ص������ַ�����'\0' ǰ����ֵ��ַ�������������'\0' )��
//����ָ����ַ�������Ҫ��'\0' ������
//ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ� �״�
//ѧ��strlen������ģ��ʵ��

//strcpy
// char* strcpy(char * destination, const char * source );
//Copies the C string pointed by source into the array pointed by destination, including the terminating null
//character(and stopping at that point).
//Դ�ַ���������'\0' ������
//�ὫԴ�ַ����е�'\0' ������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//Ŀ��ռ����ɱ䡣
//ѧ��ģ��ʵ�֡�

//strcat
// char * strcat ( char * destination, const char * source );
//Appends a copy of the source string to the destination string.The terminating null character in
//destination is overwritten by the first character of source, and a null - character is included at the end of
//the new string formed by the concatenation of both in destination.
//Դ�ַ���������'\0' ������
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
//Ŀ��ռ������޸ġ�
//�ַ����Լ����Լ�׷�ӣ���Σ�

//strcmp
// int strcmp ( const char * str1, const char * str2 );
//This function starts comparing the first character of each string. If they are equal to each other, it
//continues with the following pairs until the characters differ or until a terminating null - character is
//reached.
//��׼�涨��
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//��ô����ж������ַ�����

//strncpy
// char * strncpy ( char * destination, const char * source, size_t num );
//Copies the first num characters of source to destination. If the end of the source C string (which is
//signaled by a null - character) is found before num characters have been copied, destination is padded
//with zeros until a total of num characters have been written to it.
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num����

//strncat
// char * strncat ( char * destination, const char * source, size_t num );
//Appends the first num characters of source to destination, plus a terminating null-character.
//If the length of the C string in source is less than num, only the content up to the terminating nullcharacter
//is copied.
/* strncat example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}

//strncmp
// int strncmp ( const char * str1, const char * str2, size_t num );
//�Ƚϵ���������ַ���һ������һ���ַ�����������num���ַ�ȫ���Ƚ��ꡣ
/* strncmp example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	return 0;
//}

//strstr
// char * strstr ( const char *, const char * );
//��һ���ַ������ҵ������ַ���
//Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
/* strstr example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(str);
//	return 0;
//}

//strtok
// char * strtok ( char * str, const char * sep );
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ���������\0 ��β������һ��ָ�������ǵ�ָ�롣��ע��strtok�������
//�䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
//strtok�����ĵ�һ��������ΪNULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������ΪNULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻�NULL ָ�롣
/* strtok example */
//#include <stdio.h>
//#include <string.h>
//(1)
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}
//(2)
//#include <stdio.h>
//int main()
//{
//	char* p = "zhangpengwei@bitedu.tech";
//	const char* sep = ".@";
//	char arr[30];
//	char* str = NULL;
//	strcpy(arr, p);//�����ݿ���һ�ݣ�����arr���������
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}

//strerror
// char * strerror ( int errnum );
//���ش����룬����Ӧ�Ĵ�����Ϣ��
/* strerror example : error list */
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>//���������ͷ�ļ�
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	//errno: Last error number
//	return 0;
//}

//�ַ�ת������
//int tolower(int c);
//int toupper(int c);
/* isupper example */
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c = tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}


//�ڴ���غ���
//memcpy
// void * memcpy ( void * destination, const void * source, size_t num );
//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
//�������������'\0' ��ʱ�򲢲���ͣ������
//���source��destination���κε��ص������ƵĽ������δ����ġ�
/* memcpy example */
//#include <stdio.h>
//#include <string.h>
//struct {
//	char name[40];
//	int age;
//} person, person_copy;
//int main()
//{
//	char myname[] = "Pierre de Fermat";
//	/* using memcpy to copy string: */
//	memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 46;
//	/* using memcpy to copy structure: */
//	memcpy(&person_copy, &person, sizeof(person));
//	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//	return 0;
//}

//memmove
// void * memmove ( void * destination, const void * source, size_t num );
//��memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص��ġ�
//���Դ�ռ��Ŀ��ռ�����ص����͵�ʹ��memmove��������
/* memmove example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//memcmp
//int memcmp ( const void * ptr1,
//	const void* ptr2,
//	size_t num );
//�Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�
/* memcmp example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n < 0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	return 0;
//}



//�Զ������ͣ��ṹ�壬ö�٣�����

//�ṹ���������
//�ṹ��һЩֵ�ü��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//�ṹ������
//struct tag
//{
//	member_list;
//}variable_list;

//��������һ��ѧ��
struct Stu
{
	char name[20];//����
	int age;//����
	char sex[5];//�Ա�
	char id[20];//ѧ��
};//�ֺŲ��ܶ�

//���������
//�������ṹ��ʱ�򣬿��Բ���ȫ������
//���磺
//�����ṹ������
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;

//����������ṹ��������ʱ��ʡ�Ե��˽ṹ���ǩ��tag����
//���������Ļ����ϣ�����Ĵ���Ϸ���
//p = &x;
//���棺 ����������������������������ȫ��ͬ���������͡� �����ǷǷ��ġ�

//�ṹ���������
//�ڽṹ�а���һ������Ϊ�ýṹ����ĳ�Ա�Ƿ�����أ�
////����1
//struct Node
//{
//	int data;
//	struct Node next;
//};
////���з�
////������ԣ���sizeof(struct Node)�Ƕ��٣�
////��ȷ�������÷�ʽ��
////����2
//struct Node
//{
//	int data;
//	struct Node* next;
//};
////ע�⣺
////����3
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
////����д���룬���з�
////���������
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;