#include <stdio.h>
#define SIZE 9
int v[SIZE] = {10, 9, 17, 7, 12, 8, 5, 15, 4, 6};

int minVal()
{
    int min = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    return min;
}
int maxVal(int v[])
{
    int max = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return max;
}
float range1(int v[])
{
    int min = minVal(v);
    int max = maxVal(v);
    return max - min;
}
float range2(int v[])
{
    int min = 0;
    int max = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return max - min;
}
int main() {}
