// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int numtotal,numaverage,numstudent,iter = 0;
    while (iter <= 10){
        printf("Enter Marks of Student %d ",iter);
        scanf("%d",&numstudent);
        numtotal += numstudent;
        iter += 1;
    }
    numaverage = numtotal / 10;
    printf("Average = %d \n",numaverage);
    printf("Total = %d",numtotal);
    return 0;
}
