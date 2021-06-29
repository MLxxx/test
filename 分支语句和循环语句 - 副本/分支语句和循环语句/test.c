#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main(){
//	int a = 0;
//	int b = 2;
//	if (a==1)
//	  if (b == 2)
//		printf("hehe\n");
//	  else 
//		printf("hahah\n");
//	return 0;
//
//
//}
 ////////////两者做对比////////
//int main()
//{
//	int a = 0; int b = 2; if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

  ////需要注意 “=”赋值和 “==”等于的区别 常量赋值给变量 而变量不能赋值给常量
////代码3
//int num = 1; if (num == 5)
//{
//	printf("hehe\n");
//}
//
////代码4
//int num = 1; if (5 == num)
//{ 
//	printf("hehe\n");
//}


//int main()
//{
//	int i;
//
//	for (i = 0; i <= 100; i++)
//	{
//		if (1==i%2)
//	
//			printf("%d",i);
//	}
//	return 0;
//}

///switch语句？//////////////

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //switch （）必须为整型
//	{
//	   case 1:  // case也必须为 整型
//			printf("星期一\n"); break;
//		case 2:
//			printf("星期二\n"); break;
//		case 3:
//			printf("星期三\n"); break;
//		case 4:
//			printf("星期四\n"); break;
//		case 5:
//			printf("星期五\n"); break;
//		case 6:    
//			printf("星期六\n"); break;
//		case 7:
//			printf("星期天\n"); break;
//	}
//	return 0;
//}

//int main()
//{
//	int day=0;
//	int n = 1;
	/*scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
						printf("weekday\n");
							break;
	case  6:
	case  7:
									printf("weekend\n");
									break;
	default:
		printf("输入错误\n");

*/

 /*  }

	return 0;
}

*/

//int main()
//{
//	int n = 1; 
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{             //switch允许嵌套使用case 1:
//			n++;
//		case 2:
//			m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//		i++;
//
//		printf("%d", i);
//		
//	}
//	return 0;
//
//}

//int main()
//{
//	int i = 1; 
//	while (i <= 10)
//	{
//		if (i == 5)  //死循环
//			continue;
//		
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}       //ctrl+z结束循环











