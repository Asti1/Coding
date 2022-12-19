#include<stdio.h>
int factorial(int x);
int main(){
    int a = factorial(3);
    printf("The value of factorial is %d\n", a);
    return 0;
}
int factorial(int x){
    if (x == 1 || x == 0){
        return 1;
    }
    else{
        return x * factorial(x-1); // recursive call
    }
}