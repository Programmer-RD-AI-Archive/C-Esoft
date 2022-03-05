// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1;
    printf("Num 1 : ");
    scanf("%d",&num1);
    switch (num1) {
        case 80...100 : printf("A"); break;
        case 60...79 : printf("B"); break;
        case 40...59 : printf("C"); break;
        case 0...39 : printf("D"); break;
        default : printf("F"); break;
    }
}
