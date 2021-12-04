#include <stdio.h>

int main()
{
    int iter_1, iter_2, iter_3;
    printf("Enter the number of *s you want to be showed : ");
    scanf("%d", &iter_1);
    do
    {
        iter_2 = 0;
        do
        {
            printf("*");
            iter_2++;
        } while (iter_2 <= iter_1);
        printf("\n");
        iter_1--;
    } while (iter_1 <= 0);
}
