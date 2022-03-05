#include <stdio.h>

float average(int total, int count)
{
    float avg;
    avg = total / count;
    printf("Average = %f \n", avg);
}
void addition(int a, int b)
{
    int tot;
    tot = a + b;
    printf("Total = %d \n", tot);
    average(tot, 2);
}
int main()
{
    int a, b;
    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);
    addition(a, b);
}
