#include <stdio.h>

int a(int b)
{
    int c, d;
    d = 0;
    c = 10;         // c b
    while (c > b)   // 10 1
    {               // 9 2
                    // 8 3
                    // 7 4
                    // 6 5
                    // 5 6
        d = d + 1;
        c--;
    }
    return (d); // 6
}
