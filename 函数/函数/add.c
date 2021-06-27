 //11111//
///int g_val = 2020;//全局变量  //若改为  static int g_val = 202 0
                             //程序将会报错

   ////定义一个函数
int Add(int x, int y )  //若改为  static int Add(int x, int y )
                             //程序将会报错
{
	int z = x + y;
	return z;



}
