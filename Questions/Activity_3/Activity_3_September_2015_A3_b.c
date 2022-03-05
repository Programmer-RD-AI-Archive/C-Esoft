#include <stdio.h>
int V[] = {4, 4, 5, 5, 6, 6};
void W(int X, int Y)
{
    int Z;
    for (Z = 0; Z < 5; Z++)
    {
        if (V[Z] == X && V[Z + 1] == Y)
        {
            V[Z] = 'y';
        }
        else
        {
            V[Z] = 'n';
        }
        printf("\n");
    }
}
