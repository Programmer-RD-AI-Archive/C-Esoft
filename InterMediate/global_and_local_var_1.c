#include <stdio.h>

int x = 1;
int y = 2;
void add()
{
    int a = 5;
    int b = x + y + a;
    printf("%d ", b);
}
int main()
{
    int a = 10;
    int b = x + y + a;
    printf("%d ", b);
    add();
}
