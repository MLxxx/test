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
 ////////////�������Ա�////////
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

  ////��Ҫע�� ��=����ֵ�� ��==�����ڵ����� ������ֵ������ ���������ܸ�ֵ������
////����3
//int num = 1; if (num == 5)
//{
//	printf("hehe\n");
//}
//
////����4
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

///switch��䣿//////////////

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //switch ��������Ϊ����
//	{
//	   case 1:  // caseҲ����Ϊ ����
//			printf("����һ\n"); break;
//		case 2:
//			printf("���ڶ�\n"); break;
//		case 3:
//			printf("������\n"); break;
//		case 4:
//			printf("������\n"); break;
//		case 5:
//			printf("������\n"); break;
//		case 6:    
//			printf("������\n"); break;
//		case 7:
//			printf("������\n"); break;
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
		printf("�������\n");

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
//		{             //switch����Ƕ��ʹ��case 1:
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
//		if (i == 5)  //��ѭ��
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
}       //ctrl+z����ѭ��











