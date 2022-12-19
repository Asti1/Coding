// Question 1
// Write a program to print the address of a variable. Use this address to get the value of the variable

#include<stdio.h>

int main(){
    int a = 34;
    printf("The address of the variable is %u\n", &a);
    printf("The value of the variable is %d\n", *(&a));
    return 0;
}

// Question 2
// Write a program having a variable i. Print the address of i. Pass this variable in a function and then print its address

#include<stdio.h>
void address(int i);
int main(){
    int i = 33;
    printf("The address of this variable is %u\n", &i);
    address(i);// It will be a different address than the previous one cause the value 4 is stored in main and another 4 is then stored in the fucnt variable at a different address
    return 0;
}
void address(int i){
    printf("The address of i is %u\n", &i);
}


// Question 3
// Write a program to change the value of a variable 10 times of its current value. Write a funtion and pass the value as a reference

#include<stdio.h>
int change(int i);
int main(){
    int i = 10;
    printf("The current value is %d\n", i);
    change(i);

    return 0;
}
int change(int i){
    printf("The changed value is %d\n", 10*(*(&i)));
}


// Question 4
// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values in the main()

#include<stdio.h>
int sum_avg(int a, int b, int *sum , float *avg);
int main(){
    int i = 10, j = 20, sum;
    float avg;
    sum_avg(i, j , &sum, &avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of avg is %f\n",avg);
    return 0;
}
int sum_avg(int a, int b, int *sum, float *avg) {
    *sum = a + b;
    *avg = (float)*sum/2;
}

// Question 5 
// Write a program print the value of i using ptr to ptr type 
#include<stdio.h>

int main(){
    int i = 30;
    int *ptr;
    int **ptrtoptr;
    ptr = &i;
    ptrtoptr = &ptr;
    printf("The value of i is %d\n", *(*ptrtoptr));
    return 0;
}