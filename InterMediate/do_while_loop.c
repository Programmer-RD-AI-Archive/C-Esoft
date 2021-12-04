#include <stdio.h>
int main()
{
    int n = 1;
    while (n <= 5)
    {
        printf("%d\n", n);
        n += 1;
    }
    for (n = 1; n <= 5; n++)
    {
        printf("%d\n", n);
    }
}
