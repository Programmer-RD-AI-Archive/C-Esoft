#include <stdio.h>
#define SIZE 10

int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int BinarySearch(int num)
{
    int low, high, mid;
    low = 0;
    high = SIZE - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        printf("\nlow = %d \n high = %d \n mid = %d\n", low, high, mid);
        printf("num = %d \n arr[mid] = %d", num, arr[mid]);
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] < num)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int num = 7;
    int result = BinarySearch(num);
    printf("%d\n", result);
}
