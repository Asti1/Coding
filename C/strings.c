#include<stdio.h>

int main(){
    // char str[] = {'A', 's', 't', 'i', '\0'}; OLD WAY
    char str[] = "Asti"; // NEW WAY
    char *ptr = str;
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    // or you can print in one line
    printf("%s", str);

    return 0;
}