#include<stdio.h>

int main(){
    int a;
    printf("Enter your number");
    scanf("%d", &a);

    (a>5) ? printf("A is greater than 5\n") : printf("A is less than 5\n");
    // One line if-else code : condition ? outcome : (else) outcome
    return 0;
}