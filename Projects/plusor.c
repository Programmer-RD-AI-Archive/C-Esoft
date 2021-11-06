// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    printf("Enter num ");
    scanf("%d",&num);
    switch (num > 0) {
        case 1 : printf("+"); break;
        default : printf("-");
    }
}
