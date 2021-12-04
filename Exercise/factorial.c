#include <stdio.h>
int main()
{
    int init_factorial, total_factorial,iter;
    printf("Enter Factorial : ");
    scanf("\n %d \n", &init_factorial);
    do {
        printf("\n %d \n", init_factorial);
        printf("\n %d \n", total_factorial);
        total_factorial = total_factorial * init_factorial;
        init_factorial--;
    } while (init_factorial == 0);
}
