#include<stdio.h>

int main(){
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    for(int i=0;i<4;i++){
        printf("Enter the value of marks of %d student\n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<4;i++){
        printf("The value of marks of %d student is %d\n",i+1,marks[i]);
    }
    return 0;
}