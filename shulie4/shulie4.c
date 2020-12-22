#include <stdio.h>

int ADD(int n)
{
    int i = 1;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int i;
    int n;
    int ret=0;
    scanf_s("%d", &n);

    for (i = n; i >= 1; i--)
    {
        int tmp;
        tmp = ADD(i);
        ret = ret + tmp;
    }
    printf("%d", ret);
    return 0;
}