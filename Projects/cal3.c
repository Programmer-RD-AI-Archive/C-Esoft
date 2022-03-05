// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1,num2;
    char opr;
    printf("Operator : ");
    scanf("%c",&opr);
    printf("Num 1 : ");
    scanf("%d",&num1);
    printf("Num 2 : ");
    scanf("%d",&num2);
    switch (opr) {
        case '+' : printf("%d + %d = %d",num1,num2,num1+num2); break;
        case '-' : printf("%d - %d = %d",num1,num2,num1-num2); break;
        case '*' : printf("%d * %d = %d",num1,num2,num1*num2); break;
        case '/' : printf("%d / %d = %f",num1,num2,(float)num1/(float)num2); break;
        default : printf("IDX"); break;
    }
}
