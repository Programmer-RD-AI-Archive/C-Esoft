#include <stdio.h>

int main()
{
    int n = 1;
    int sumAll = 0;
    int sumEven = 0;
    int sumOdd = 0;
    do
    {
        if (n % 2 == 0)
        {
            sumEven += n;
        }
        else
        {
            sumOdd += n;
        }
        sumAll += n;
        n++;
    } while (n <= 10);
    printf("%d\n", sumEven);
    printf("%d\n", sumOdd);
    printf("%d\n", sumAll);
    printf("%d\n", n);
}
