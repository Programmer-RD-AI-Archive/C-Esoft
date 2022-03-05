// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    printf("Enter num ");
    scanf("%d",&num);
    switch (num % 2) {
        case 0 : printf("Even"); break;
        default : printf("Odd");
    }
}
