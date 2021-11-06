// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1;
    int num2;
    char command;
    printf("Enter num 1 ");
    scanf("%d",&num1);
    printf("Enter num 2 ");
    scanf("%d",&num2);
    printf("Command ");
    scanf("%c",&command);
    switch (command) {
        case '+' : printf("%d",num1+num2); break;
        case '-' : printf("%d",num1-num2); break;
        case '*' : printf("%d",num1*num2); break;
        case '/' : printf("%d",num1/num2); break;
        default : "Unkown";
    }
    
}
