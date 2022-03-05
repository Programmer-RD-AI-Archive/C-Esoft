#include <stdio.h>
#define SIZE 5

int arr[SIZE] = {50, 45, 30, 78, 90};

int LinearSearch(int num)
{
    int i;
    for (i = 0; i < SIZE; i++) // Iterate throught all of the elements of the array (index)
    {
        if (arr[i] == num) // If the iterating indexs number is equal to the number required to be found
        {
            return i; // the index will be returned
        };
    }
    return -1;
}

int main()
{
    int num = 78;
    int index_in_array = LinearSearch(num);
    if (index_in_array == -1)
    {
        printf("%d is not in the array", num);
    }
    else
    {
        printf("%d is in the array at index %d", num, index_in_array);
    }
}
