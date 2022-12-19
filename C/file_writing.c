#include<stdio.h>

int main(){
    FILE *ptr;
    int num = 7;
    ptr = fopen("Hello.txt", "w");
    fprintf(ptr , "The number is %d\n", num);
    fclose(ptr);
    return 0;
}