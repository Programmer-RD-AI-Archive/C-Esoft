#include <stdio.h>

int main()
{
    int x = 99;
    int y = 1;
    int x_copy = x;
    x = y;
    y = x_copy;
    printf("x: %d y: %d\n", x, y);
}
