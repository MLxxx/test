                 // ����

 #include<stdio.h>
 int global = 20;//ȫ�ֱ���-�����ڴ���飨{}�� ��ı���
 int main()
{        
//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ ����bug ���������ͬ �ֲ���������
	{ int local = 10;//�ֲ�����-�����ڴ���飨{}�� �ڵı���

	printf("%d\n", global);
	printf("%d\n", local);
	}
	{
   int num1 = 0;
	 int num2 = 0;
	 int sum = 0;

	 scanf("%d%d", &num1, &num2);//���뺯��-ʹ�����뺯��scanf()������ַ��������������
	 // & ȡ��ַ����
	 //int sum = 0; c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ�� �����ƶ���scanfǰ
	 sum = num1 + num2;

	 printf("sum=%d\n", sum);
 }



//  ���������������������

	{     
		

extern int g_val;  // extern�����ⲿ����
printf("g_val =%d\n", g_val);    // ���ֱ��printf ��ʱ����ᱨ��δ�����ı�ʶ�� g_val
                                 // ��ʱ����Ҫ�����ⲿ���� ��extern
		 //ȫ�ֱ���������Ϊ��������
	}


	return 0;
}