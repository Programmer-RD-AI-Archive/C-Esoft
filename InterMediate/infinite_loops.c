#include <stdio.h>

int main()
{
    int n = 1;
    while (1) // 1 = true, 0 = false
    {
        if (n == 11)
        {
            break;
        }
        printf("%d\n", n);
        n++;
    }
}
