#include<stdio.h>
#include<string.h>
int main(){
    char *str = "Asti";
    char st[54] = "Hello";
    strcat(st, str);
    printf("Now %s",st);
    return 0;
}