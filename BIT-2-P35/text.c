#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�Ķ�������Ȥ�Ĵ���
//����1
//(*(void (*)())0)();
// 
// void (*)()--����ָ������
//(void (*)())0 -- ǿ������ת��
//(*(void (*)())0) -- �����ó�Ϊ����
//(*(void (*)())0)() -- ���ú���-����()
//�����ĵ���

//����2
//void (*signal(int, void(*)(int)))(int);

//signal(int, void(*)(int)) -- ��һ����������һ������Ϊ���ͣ��ڶ�������Ϊ����ָ�����ͣ��ú���ָ��ָ��ĺ���������int������ֵ��void
//void (* )(int) -- �����ķ�������Ϊ����ָ�����ͣ�����ָ��ָ��ĺ����Ĳ���Ϊint���ͣ���������Ϊvoid������

//��
//typedef void(*pfun_t)(int);
//#define uint1 unsigned int
//typedef unsigned int uint;
//
//pfun_t signal(int, pfun_t);


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����ָ��
//	int(*p)(int, int) = Add;
//	printf("%d\n", p(a,b));		//30
//	printf("%d\n", Add(a, b));	//30
//
//	printf("%d\n", (*p)(a, b));	//30
//
//	//printf("%d\n", *p(a, b));	//err
//	return 0;
//}

/*************************����ָ������*************************/
//int* arr[10] ---����ָ������ ----ÿ�������Ԫ��Ϊint*
//int (*parr1[10])() ----����ָ������ ----ÿ��Ԫ��int(* )()
//int *parr2[10]() ----err �﷨����
//int (* )() parr3[10] ----err �﷨����


//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ  ---  ����ָ������
//	int(*parr[5])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](6, 3));
//									  /*9
//										3
//										18
//										2*/
//	}
//	return 0;
//}

//��ϰ  ����ָ��  ����ָ������
char* my_strcpy(char* dest, const char* scr);
//1.дһ������ָ�� pf ���ܹ�ָ��my_strcpy
char* (*pf)(char*,const char*) = my_strcpy;
//2.дһ������ָ������ pfarr ���ܹ����4��my_strcpy�ĵ�ַ
char* (*pfarr[4])(char*, const char*) = { my_strcpy };
