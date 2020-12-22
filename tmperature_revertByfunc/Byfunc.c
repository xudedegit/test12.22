#include <stdio.h>

int fahr, celsius;
int lower, upper, step;

void Revert(int fahr)
{
   
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

}

int main()
{
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    Revert(fahr);


}