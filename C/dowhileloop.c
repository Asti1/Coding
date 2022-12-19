#include<stdio.h>

int main(){
    int i = 0;
    do{
        printf("The value of i is %d\n", i);
        i++;
    }while(i < 10);
    return 0;
}// First runs then checks the condition, hence do while loop will at least run once.