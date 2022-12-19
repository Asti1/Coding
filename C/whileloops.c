#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    while (a<10){
        printf("%d\n", a);
        a++;
        // a++ --> First print then increment if in print funtion
        // ++a --> First increment then print if in print funtion
    }

    return 0;
}