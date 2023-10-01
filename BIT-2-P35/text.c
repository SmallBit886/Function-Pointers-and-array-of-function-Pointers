#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//阅读两段有趣的代码
//代码1
//(*(void (*)())0)();
// 
// void (*)()--函数指针类型
//(void (*)())0 -- 强制类型转换
//(*(void (*)())0) -- 解引用成为函数
//(*(void (*)())0)() -- 调用函数-传参()
//函数的调用

//代码2
//void (*signal(int, void(*)(int)))(int);

//signal(int, void(*)(int)) -- 是一个函数，第一个参数为整型，第二个参数为函数指针类型：该函数指针指向的函数参数是int，返回值是void
//void (* )(int) -- 函数的返回类型为函数指针类型，函数指针指向的函数的参数为int整型，返回类型为void空类型

//简化
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
//	//函数指针
//	int(*p)(int, int) = Add;
//	printf("%d\n", p(a,b));		//30
//	printf("%d\n", Add(a, b));	//30
//
//	printf("%d\n", (*p)(a, b));	//30
//
//	//printf("%d\n", *p(a, b));	//err
//	return 0;
//}

/*************************函数指针数组*************************/
//int* arr[10] ---整形指针数组 ----每个数组的元素为int*
//int (*parr1[10])() ----函数指针数组 ----每个元素int(* )()
//int *parr2[10]() ----err 语法错误
//int (* )() parr3[10] ----err 语法错误


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
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址  ---  函数指针数组
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

//练习  函数指针  函数指针数组
char* my_strcpy(char* dest, const char* scr);
//1.写一个函数指针 pf ，能够指向my_strcpy
char* (*pf)(char*,const char*) = my_strcpy;
//2.写一个函数指针数组 pfarr ，能够存放4个my_strcpy的地址
char* (*pfarr[4])(char*, const char*) = { my_strcpy };
