#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("Hello.txt", "r");
    char c = fgetc(ptr); // used to read the file character by character
    printf("The value of my character is %c\n", c);
    fputc("A",ptr); // print a character in the file
    fclose(ptr);
    return 0;
}