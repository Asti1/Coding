#include<stdio.h>
#include<string.h>
int main(){
    char *str = "Asti";
    char st[54] = "Hello";
    int val = strcmp(st, str); // Used to compare two strings, if the strings are equal then it returns zero
    printf("Now val is %d",val);
    return 0;
}