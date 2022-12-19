// Question 1
// Write a program using functions to find the average of 3 numbers

#include<stdio.h>
int average(int a , int b , int c);
int main(){
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("The average of 3 numbers is %d\n",average(a, b, c));
    return 0;
}
int average(int a , int b , int c){
    int result;
    result = (a + b + c) / 3;
    return result;
}

//Question 2
// Write a function to calculate the force of attraction on a body of mass m exerted by earth

#include<stdio.h>
float force(float mass);
int main(){
    float mass;
    printf("Enter the value of mass\n");
    scanf("%f", &mass);
    printf("The value of force exerted by the earth is %f\n", force(mass));
    return 0;
}
float force(float mass){
    float result;
    result = mass * 9.8;
    return result;
}

// Question 3
// Write a program using recursion to print the fibonacci series

#include<stdio.h>
int fibonacci(int a);
int main(){
    int a = fibonacci(4);
    printf("The value of sequence is %d\n", a);
    return 0;
}
int fibonacci(int a){
    if (a==1){
        return 1;
    }
    else{
       return fibonacci(a-1) + fibonacci(a-2);
    }
}
