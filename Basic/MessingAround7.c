// A Program to get 3 numbers from a user and display the highest number out of the 3
#include <stdio.h>
int main() {
    int num_1,num_2,num_3,highest;
    printf("Num 1");
    scanf("%d",&num_1);
    printf("Num 2");
    scanf("%d",&num_2);
    printf("Num 3");
    scanf("%d",&num_3);
    if (num_1 > num_2) {
        highest = num_2;
    }
    if (num_2 > num_1) {
        highest = num_1;
    }
    if (num_3 > highest) {
        highest = num_3;
    }
    printf("%d",highest);
}
