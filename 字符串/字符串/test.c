#include<stdio.h>
#include<string.h> //�õ�strlenʱ��Ҫ��string.h
int main()
{

	////

	//char arr1[] = "abc";// ���� 
	////�ַ����г����ַ��⻹��'\0'--'\0'�ַ���������־
	//char arr2[] = { 'a', 'b', 'c','\0' };
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

//	char arr1[] = "abc";//'\0'�������ַ�����
//	char arr2[] = { 'a', 'b', 'c' };
//
//	printf("%d\n", strlen(arr1));// strlen string length-�����ַ�������
//	printf("%d\n", strlen(arr2));
//
//
//             ת���ַ�

	//printf("abc\n");

	//printf("c:\test\32\test.c");
//t����Ϊ�ַ� ���Ǽ���\t�� ��Ϊˮƽ�Ʊ�����൱��tab������һ�οհ׿ռ䣩
	//printf("are you ok\?\?\n");

	//printf("c:\\test\\32\\test.c");
	//���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
	//printf("%c\n",'\'');



//printf("%d\n", strlen("c:\test\32\test.c"));
// \32--Ϊ2���˽�������  ��word��
// 32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���Ϊascll��ֵ����Ӧ��ʮ������
// �˽���32ת��Ϊʮ����Ϊ26 26���ַ�����Ϊһ����ͷ	
//printf("%c\n", '\32');
//printf("%c\n", '\132');

	printf("%c\n", '\167');
	printf("%c\n", '\3');
	printf("%c\n", '\156');
	printf("%c\n", '\151');

return 0; 
}
