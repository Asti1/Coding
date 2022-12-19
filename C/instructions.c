#include<stdio.h>
#include<math.h>

int main(){
    int a = 5; // This is a type declaration instruction
    // Everything should be in order from top to bottom like in python 
    int b = 10;
    // These are arithmetic operations
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("5 when divided by 2 leaves a remainder %d\n", 5 % 2);
    printf("5 to the power 4 is %f\n", pow(5, 4)); // Have to use #include<math.h> in the start to import the funtion of power

    return 0;
}