// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int mark;
    char grade;
    printf("Enter Marks : ");
    scanf("%d",&mark);
    if (mark >= 80)
        grade = 'A';
    else if (mark >= 60)
        grade = 'B';
    else if (mark >= 50)
        grade = 'C';
    else if (mark >= 40)
        grade = 'D';
    else
        grade = 'F';
    printf(grade);
}
