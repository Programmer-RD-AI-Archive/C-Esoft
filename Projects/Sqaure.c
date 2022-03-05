#include <stdio.h>

int square(int n)
{
    return n * n;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d squared is %d\n", n, square(n));
    return 0;
}
