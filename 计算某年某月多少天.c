#include <stdio.h>
int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int get_day_of_month(int y, int m)
{
	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };  //定义变量 days
	       //下标  0 1  2  3  4  5  6  7  8   9  10 11 12
	int day = days[m];       //根据数组元素的下标找到数组里的值 放到变量 day 中
	if ((is_leap_year(y) == 1) && (m == 2))  //是闰年 并且 月份 是 二月份
	{
		day++;     //28  --> 29
	}
	return day;   //如果不成立，则直接返回day  (不加1，不是闰年，28天)
}

int main()
{
	int year = 0;
	int month = 0;

	scanf("%d %d", &year,&month);
	int day = get_day_of_month(year, month);   //day 局部变量 与 get_day_of_month中定义的day不是一个day
	printf("%d", day);

}
