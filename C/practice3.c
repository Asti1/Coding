//Question 1
//Print a multiplication table of number n
#include<stdio.h>

int main(){
    int n;
    int i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i = 1; i < 11; i++){
        printf("%d\n", i * n);
    }
    return 0;
}


//Question 2
//Write a program to print the sum of the first 10 natural numbers using while loop
#include<stdio.h>

int main(){
    int i = 1;
    int s = 0;
    while(i < 11){
        s += i;
        i++;
    }
    printf("The sum is %d\n", s);
    return 0;
}


//Question 3
//Write a program to find the factorial of a number 
#include<stdio.h>

int main(){
    int i = 1, n = 3, factorial = 1;
    for(i=1;i<=n;i++){
        factorial *= i;
    }
    printf("The value of factorial is %d\n", factorial);

    return 0;
}