                 // 变量

 #include<stdio.h>
 int global = 20;//全局变量-定义在代码块（{}） 外的变量
 int main()
{        
//局部变量和全局变量的名字建议不要相同 容易bug 如果名字相同 局部变量优先
	{ int local = 10;//局部变量-定义在代码块（{}） 内的变量

	printf("%d\n", global);
	printf("%d\n", local);
	}
	{
   int num1 = 0;
	 int num2 = 0;
	 int sum = 0;

	 scanf("%d%d", &num1, &num2);//输入函数-使用输入函数scanf()函数地址可以输入多个函数
	 // & 取地址符号
	 //int sum = 0; c语言语法规定，变量要定义在当前代码块的最前面 所以移动到scanf前
	 sum = num1 + num2;

	 printf("sum=%d\n", sum);
 }



//  变量的作用域和生命周期

	{     
		

extern int g_val;  // extern声明外部符号
printf("g_val =%d\n", g_val);    // 如果直接printf 此时程序会报警未声明的标识符 g_val
                                 // 此时就需要声明外部函数 用extern
		 //全局变量作用域为整个工程
	}


	return 0;
}