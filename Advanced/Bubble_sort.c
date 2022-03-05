#include <stdio.h>
#define SIZE 5
int arr[SIZE] = {1, 2, 3, 4, 5};
void swap(int i)
{
    int temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
}
void BubbleSort()
{
    int target = SIZE - 1;
    while (target > 0)
    {
        int i;
        for (i = 0; i < target; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(i);
            }
        }
    }
}
