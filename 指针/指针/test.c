#include <stdio.h>



//int main()
//{
//	int num = 10;
//	&num;//取出num的地址
//	printf("%p\n", &num);//打印地址，%p--以地址的形式打印return 0;
//}

 int main()
{
	int num = 10;
	int *p = &num;  //*--解引用操作符
	*p = 20; 
	printf("%p\n", p);
	return 0;




}
