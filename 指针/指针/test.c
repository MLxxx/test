#include <stdio.h>



//int main()
//{
//	int num = 10;
//	&num;//ȡ��num�ĵ�ַ
//	printf("%p\n", &num);//��ӡ��ַ��%p--�Ե�ַ����ʽ��ӡreturn 0;
//}

 int main()
{
	int num = 10;
	int *p = &num;  //*--�����ò�����
	*p = 20; 
	printf("%p\n", p);
	return 0;




}
