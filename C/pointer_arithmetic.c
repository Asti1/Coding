#include<stdio.h>

int main(){
    int i = 34;
    int *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    // int is of 4 bytes
    // float is of 4 bytes
    // char is of 1 byte
    return 0;
}