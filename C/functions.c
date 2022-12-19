#include<stdio.h>
void display(); // Function prototype
int main(){
    display(); // Function call
    return 0;
}

void display(){ // Funtion definition
    printf("This is the function that is being executed\n");
}