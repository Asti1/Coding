// Write a program in C to declare, initialise and access array elements in a 1-D array.
#include<stdio.h>
int main(){
    int arr1[5]; // This is array declaration.
    printf("Enter the array elements: \n");
    for(int i=0; i<5; i++){
        printf("arr1[%d]= ", i);
        scanf("%d", &arr1[i]); // Accepting array elements from user (initialisation).
    }
    printf("The array elements are: \n");
    for(int i =0; i<5; i++){  // Reading the array elements.
        printf("%d ",arr1[i]);
        printf("\n");
    }
    return 0;
}