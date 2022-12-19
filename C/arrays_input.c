#include<stdio.h>

int main(){
    int marks[5];
    for(int i =0;i<5;i++){
        printf("Enter the number you want to add into the array:\n");
        scanf("%d",&marks[i]);
    }
     for(int i =0;i<5;i++){
        printf("The values are %d\n",marks[i]);
    }

    return 0;
}