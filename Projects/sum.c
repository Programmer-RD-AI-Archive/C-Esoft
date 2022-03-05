#include <stdio.h>

int sum(int n){
    int s = 0;
    for (int i = 0; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The sum of the numbers is %d\n", sum(n));    
}
