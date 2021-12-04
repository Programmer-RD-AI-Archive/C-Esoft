#include <stdio.h>
int main()
{
    int total = 0;
    for (int n = 0; n < 10; n++)
    {
        int num = 0;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num <= 0){
            printf("total %d", total);
            break;
        }
        else {
            total = total + num;
        }
    }
}
