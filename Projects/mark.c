// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,iter1,iter2 = 0;
    printf("Num of Patter : ");
    scanf("%d",num);
    while (iter1 <= num){
        while (iter2 <= iter1) {
            printf("*");
            iter2 += 1;
        }
        printf("\n");
        iter2 = 0;
        iter1 += 1;
    }
    return 0;
}
