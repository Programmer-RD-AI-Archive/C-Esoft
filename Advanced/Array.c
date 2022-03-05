#include <stdio.h>
#define SIZE 5
int arr[SIZE] = {1, 2, 3, 4, 5};
int main()
{

    int iterator, total = 0;
    for (iterator = 0; iterator < SIZE; iterator++)
    {
        total = total + arr[iterator];
    }
    printf("%d", total);
}
