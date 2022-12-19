// Write a program to find the maximum and minimum element in an array.
#include<stdio.h>
int main(){
    int arr[5], i, max = 0, min = 0;
    printf("Enter the array elements: \n"); // Entering the array elements.
    for(i = 0; i<5; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i = 0; i<5; i++){ // Checking for max element.
        if(arr[i]>max){
            max = arr[i];
        }
    }
    min = arr[0];
    for(i = 0; i<5; i++){ // Checking for min element.
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("The max element in the array is %d\n", max);
    printf("The minimum element in the array is %d\n", min);
    return 0;
}
