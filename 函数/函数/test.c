#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


//int Add(int x, int y)   // int x int y Ϊ�������� 
//{
//	int z = x + y; 
//	return z;
//	         ///�����󷵻ص�z��   �����ĵ���
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//int a = 100;
//	//int b = 200;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	//sum = num1 +num2;
//	//sum = a+b;
//	sum = Add(&num1, num2); //���㷨
//	printf("sum = %d\n", sum);
//
//
//
//
//	return 0;
//
//
//}
 
   ////  ����/////////

//int main()
//{
//int i = 0;
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//	int  arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	for (i = 0; i < 10; i++){
//		printf("%d", arr[i]); //�±����ʽ����Ԫ��
//	}
//	printf("\n");
//
//
//	return 0;
//}
// 
  // sz=sizeof(arr)/sizeof(arr[0])// ���������е�Ԫ�ظ���


////////////////////����//////////

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d", b);  
//	return 0;
//}

//  Դ�� ���� ���� 
// �������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
// 1111111111111111111111111111111  ����
// 1111111111111111111111111111110   �����һ���ڷ���
// 1000000000000000000000000000001    1��ʾ��һ

//  auto int a=10; �ֲ�����ǰ�����Ա���auto һ�������ʡ��
// 
//
//void test()
//{
//	int i = 0;   //��̬�ľֲ�����
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
////����2
//#include<stdio.h>
//void test()
//{
//	//static���ξֲ�����
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

//11111111//////////////// ���� extern static���ⲿ����
//int main(){
//	
//	//extrn--s����һ���ⲿ����
//	extern int g_val;
//	printf("g_vl=%d\n", g_val);
//	return 0;
//}
///�ı��˱����������� �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û�а취ʹ��
////////////
//����һ���ⲿ����
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

//#define MAX 100  // #define �����ʾ��
//
//int main(){
//	int a = MAX; //Ҳ���� int a=100
//	return 0;
//}

//�����

//������ʵ��
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}
// ���ʵ��
#define Max(x,y) x>y?x:y

int main()
{
	int a = 10;
	int b = 20;

	//������ʽ
	int Max = Max(a, b);
	printf("Max=%d\n", Max);

	//��ķ�ʽ
	Max = Max(a, b);
	printf("Max=%d\n", Max);
	return 0;

}











