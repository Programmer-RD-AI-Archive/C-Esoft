#include <stdio.h>
void swap(int *replace_1, int *replace_2)
{
    int temparary = *replace_1;
    *replace_1 = *replace_2;
    *replace_2 = temparary;
}

void bubble_sorting_algorithm(int list[], int n)
{
    int iter;
    for (iter = 0; iter < n - 1; iter++)
    {
        if (list[iter] > list[iter + 1])
        {
            swap(&list[iter], &list[iter + 1]);
        }
    }
}
