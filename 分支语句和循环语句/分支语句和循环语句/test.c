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

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	   case 1:
			printf("星期一\n"); break;
		case 2:
			printf("星期二\n"); break;
		case 3:
			printf("星期三\n"); break;
		case 4:
			printf("星期四\n"); break;
		case 5:
			printf("星期五\n"); break;
		case 6:    
			printf("星期六\n"); break;
		case 7:
			printf("星期天\n"); break;
	}
	return 0;
}









