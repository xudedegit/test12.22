#include <stdio.h>
//经过测试证明，当数组名作为参数传递时，其代表数组首元素的首地址，在被调用函数中
//是可以对数组中的元素进行更改的
void Modify(int arr[5],int n,int modify)
{
	arr[n] = modify;
}
int main()
{
	int i = 0;
	int arr[5] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Modify(arr,2,7);
	for (i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
	}
	
	return 0;

}