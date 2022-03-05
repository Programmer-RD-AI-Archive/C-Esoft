// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num_iter = 1;
    int sum_even = 0;
    int sum_odd = 0;
    int sum = 0;
    while (num_iter <= 10){
        if (num_iter % 2 == 0){
            sum_even += num_iter;
        }
        else {
            sum_odd += num_iter;
        }
        sum += num_iter;
        num_iter += 1;
    }
    printf("%d \n",sum);
    printf("%d \n",sum_even);
    printf("%d \n",sum_odd);
}
