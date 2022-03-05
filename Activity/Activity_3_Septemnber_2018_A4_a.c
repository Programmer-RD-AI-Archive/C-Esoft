#include <stdio.h>

char compare(int p1, int p2)
{
    if (p1 == p2)
    {
        return ('=');
    }
    else if (p1 > p2)
    {
        return ('>');
    }
    else
    {
        return ('<');
    }
}
