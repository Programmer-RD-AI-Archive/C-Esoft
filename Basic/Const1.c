// Const or not
#include <stdio.h>
// #define pi 3.14 // Another way of constant
int main() {
    float pi = 3.14;
    printf("%f\n",pi);
    pi = 9.5;
    printf("%f\n",pi);
    // The above is not const
    // The below is const
    const float pi2 = 3.14;
    printf("%f\n",pi2);
    pi2 = 9.5;
    printf("%f\n",pi2);
}
