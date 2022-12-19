#include<stdio.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    gets(s); // gets() function is used to input multiline comment
    puts(s); // puts() function is used to get the cursor on the next line after printing
    printf("Your name is %s\n", s);
    return 0;
}