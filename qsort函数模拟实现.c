#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



//模拟实现 qsort
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;

}
void Swap(char*buf1,char *buf2,size_t width)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;

		buf1++;
		buf2++;
	}
}
void bubble_sort(void *base ,size_t sz, size_t width, int(*cmp)(const void*p1,const void*p2) )
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//比较两个元素
			if (cmp((char*)base + width * j, (char*)base + width * (j + 1)) > 0)
			{
				Swap( (char*)base + width * j, (char*)base + width * (j + 1),width);
			}
		}
	}
}
void printf_arr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}
void test4()
{
	int arr[] = { 9,8,5,7,6,1,4,3,2,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	printf_arr(arr, sz);

}
int main()
{
	test4();
	return 0;
}
