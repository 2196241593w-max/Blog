#include <stdio.h>
#include <assert.h>
#include <string.h>

//方法1  递归法 （无第三方变量的创建）
size_t my_strlen(const char* str)
{
	assert(str != NULL);  //assert 断言， 判断 str 不能是空指针；
	if (*str != '\0')
	{
		//return 1 + my_strlen( str + 1 );
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}


//方法2 计数器
size_t my_strlen(const char* str)
{
	size_t count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
  return count;
}
//方法3 指针-指针 中间元素的个数
size_t my_strlen(const char* str)
{
	const char* start = str;
	assert(str != null);
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}



int main()
{
	char arr[] = "abcdef";
	size_t len = my_strlen(arr);
	printf("%zd\n", len);


	return 0;
}

