#include<stdio.h>

int main(){
    int i = 34 ;
    int *j = &i ; // j will now store the address of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j); // Will print the value of that address
    printf("The address of i is %u\n", j); // Will print the address of i
    printf("The value of j is %u\n", *(&j));
    return 0;
}