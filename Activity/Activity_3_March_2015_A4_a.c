#include <stdio.h>

int a(int b)
{
    int c, d;
    d = 0;
    for (c = 10; c > b; c--)
    {
        d = d + 1;
    };
    return (d);
}
