#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


//int Add(int x, int y)   // int x int y 为函数参数 
//{
//	int z = x + y; 
//	return z;
//	         ///求解完后返回到z中   函数的调用
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//int a = 100;
//	//int b = 200;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	//sum = num1 +num2;
//	//sum = a+b;
//	sum = Add(&num1, num2); //简化算法
//	printf("sum = %d\n", sum);
//
//
//
//
//	return 0;
//
//
//}
 
   ////  数组/////////

//int main()
//{
//int i = 0;
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//	int  arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	for (i = 0; i < 10; i++){
//		printf("%d", arr[i]); //下标的形式访问元素
//	}
//	printf("\n");
//
//
//	return 0;
//}
// 
  // sz=sizeof(arr)/sizeof(arr[0])// 计算数组中的元素个数


////////////////////函数//////////

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d", b);  
//	return 0;
//}

//  源码 反码 补码 
// 复数在内存中存储的时候，存储的是二进制的补码
// 1111111111111111111111111111111  补码
// 1111111111111111111111111111110   补码减一等于反码
// 1000000000000000000000000000001    1表示负一

//  auto int a=10; 局部变量前都有自变量auto 一般情况下省略
// 
//
//void test()
//{
//	int i = 0;   //静态的局部变量
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}
////代码2
//#include<stdio.h>
//void test()
//{
//	//static修饰局部变量
//	static int i = 0; 
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//	test();
//	}
//	return 0;
//}

//11111111//////////////// 关于 extern static的外部调用
//int main(){
//	
//	//extrn--s声明一个外部符号
//	extern int g_val;
//	printf("g_vl=%d\n", g_val);
//	return 0;
//}
///改变了变量的作用域 让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没有办法使用
////////////
//声明一个外部函数
//extern int Add(int a , int b );
//
//int main(){
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a , b);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//22222222// #define

//#define MAX 100  // #define 定义表示符
//
//int main(){
//	int a = MAX; //也可以 int a=100
//	return 0;
//}

//定义宏

//函数的实现
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}
// 宏的实现
#define Max(x,y) x>y?x:y

int main()
{
	int a = 10;
	int b = 20;

	//函数形式
	int Max = Max(a, b);
	printf("Max=%d\n", Max);

	//宏的方式
	Max = Max(a, b);
	printf("Max=%d\n", Max);
	return 0;

}











