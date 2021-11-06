// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int num,num2,sum;
    float avg;
    printf("Enter 1st Num : ");
    scanf("%d",&num);
    printf("Enter 2nd Num : ");
    scanf("%d",&num2);
    sum = num+num2;
    printf("Sum - %5d \n",sum);
    avg = sum / 2.0;
    printf("Avg - %.2f",avg);
}
