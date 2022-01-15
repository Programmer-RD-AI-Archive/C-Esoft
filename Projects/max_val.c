#include <stdio.h>
int main()
{

    int marks[5] = {1, 2, 3, 4, 5};
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
        }
    }
    printf("%d", max);
}
