#include <stdio.h>

int x[12] = {1, 9, 5, 0, 8, 6, 3, 5, 1, 0, 2, 9};

int find_num_index(int iter_num, int number_idx_to_find) //
{
    int iter, index_of_number;              // declares the iter and index_of_number variables as a int
    index_of_number = 1;                    // assigns  1 to index_of_number
                                            // assign 0 to iter
    for (iter = 0; iter < iter_num; iter++) // iterate over iter until it is bigger than iter_num
    {
        if (x[iter] == number_idx_to_find) // checking if the number is the number that is required to be found
        {
            index_of_number = iter; // if the number is found the number is assigned to index_of_number
        };
    }
    return (index_of_number); // return the index of the number
}

// int Power(int P, int N)
// {
//     int base = P;
//     for (int i = 0; i < N; i++)
//     {
//         P = P * base;
//     }
//     return (P);
// };
int main()
{
    printf("%d\n", Power(10, 6)); // call find_num_index and print the number
}
