#include<stdio.h>
#include<string.h> //用到strlen时就要加string.h
int main()
{

	////

	//char arr1[] = "abc";// 数组 
	////字符串中除了字符外还有'\0'--'\0'字符串结束标志
	//char arr2[] = { 'a', 'b', 'c','\0' };
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

//	char arr1[] = "abc";//'\0'不计入字符串数
//	char arr2[] = { 'a', 'b', 'c' };
//
//	printf("%d\n", strlen(arr1));// strlen string length-计算字符串长度
//	printf("%d\n", strlen(arr2));
//
//
//             转义字符

	//printf("abc\n");

	//printf("c:\test\32\test.c");
//t本身为字符 但是加了\t后 变为水平制表符（相当于tab键增加一段空白空间）
	//printf("are you ok\?\?\n");

	//printf("c:\\test\\32\\test.c");
	//用于表示一个反斜杠，防止它被解释为一个转义序列符
	//printf("%c\n",'\'');



//printf("%d\n", strlen("c:\test\32\test.c"));
// \32--为2个八进制数字  见word表
// 32作为8进制代表的那个十进制数字，作为ascll码值所对应的十进制数
// 八进制32转换为十进制为26 26在字符表中为一个箭头	
//printf("%c\n", '\32');
//printf("%c\n", '\132');

	printf("%c\n", '\167');
	printf("%c\n", '\3');
	printf("%c\n", '\156');
	printf("%c\n", '\151');

return 0; 
}
