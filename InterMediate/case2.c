// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int mark;
    char grade;
    printf("Enter");
    scanf("%d",&mark);
    switch (mark) {
        case 10 : printf('1'); break;
        case 50 : printf('5'); break;
        case 80 : printf('8'); break;
        default : printf("?");
    };
}
