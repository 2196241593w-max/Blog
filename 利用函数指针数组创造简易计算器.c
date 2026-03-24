#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("****************************\n");
	printf("********1.Add    2.Sub *****\n");
	printf("********3.Mul    4.Div *****\n");
	printf("********0.exit *************\n");

}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	int(*pfarr[5])(int,int) = {0,Add,Sub,Mul,Div};//创造函数指针数组，注意数组下标（为了方便计算，首元素 0 ）
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
    
		if (input >= 1 && input <= 5)
    {
			printf("请输入两个操作数：");
			scanf("%d %d", &x, &y);
			ret = pfarr[input](x, y);    //函数指针数组的运用，简易计算器；
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出计算器\n");
		}
		else
		{
			printf("选择错误，请重新选择\n");
		}

	} while (input);

	return 0;
}
