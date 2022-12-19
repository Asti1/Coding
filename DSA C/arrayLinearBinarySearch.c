// Write a program to perform searching in an array using linear and binary search techniques.
#include<stdio.h>
int main(){
    int i, arr1[5]; // This is array declaration.
    int element,index=0;
    int flag = 0;
    printf("Enter the array elements: \n");
    for(i=0; i<5; i++){
        printf("arr1[%d]= ", i);
        scanf("%d", &arr1[i]); // Accepting array elements from user (initialisation).
    }
    printf("The array elements are: \n");
    for(i=0; i<5; i++){  // Reading the array elements.
        printf("%d\n",arr1[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &element);
    
    // // Linear Search.
    // for(i=0; i<5; i++){
    //     if(arr1[i]==element){
    //         flag = 1;
    //         index = i;
    //         //break;
    //     }
    // }
    // if(flag==1){
    //     printf("The element was found at index %d\n", index);
    // }
    // else{
    //     printf("The element was not found\n");
    // }

    // Binary Search.
    int n = 5;
    int start= 0, end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr1[mid]==element){
            index = mid;
            flag=1;
            break;
        }
        else if(arr1[mid]<element){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    if(flag==1){
        printf("Element found at index %d\n", index);
    }
    else{
        printf("The element was not found\n");
    }
    return 0;
}