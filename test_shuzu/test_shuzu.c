#include <stdio.h>
//��������֤��������������Ϊ��������ʱ�������������Ԫ�ص��׵�ַ���ڱ����ú�����
//�ǿ��Զ������е�Ԫ�ؽ��и��ĵ�
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