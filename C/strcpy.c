#include<stdio.h>
#include<string.h>
int main(){
    char *st = "This";
    char st2[45];
    strcpy(st2, st); // Copies the string to another array
    printf("Now the st2 is %s\n", st2);
    return 0;
}