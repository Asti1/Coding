// Question 1
// Create an array of 10 numbers. Verify using pointer arithmetic that ptr+2 points to the third element
// where ptr is a pointer pointing to the first element of the array

#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = &arr[0];
    ptr+=2 ;
    if(ptr==&arr[2]){
        printf("Verified\n");
    }
    else{
        printf("Not verified\n");
    }
    return 0;
}


// Question 2
// Write an array of 10 integers which are multiplication table of 5

#include<stdio.h>

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        arr[i] = 5*(i+1);
    }
    for(int i = 0; i < 10; i++){
        printf(" 5 X %d = %d\n",i+1, arr[i]); 
    }
    return 0;
}

// Question 3
//  Write a program containing a function which reverses the array passed to it

#include<stdio.h>
void reverse(int *arr, int n){
    int temp;
    for(int i = 0; i < n/2; i++){
        temp =arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    reverse(arr, 8);
    for(int i = 0; i < 8; i++){
        printf("The value of element %d is %d\n", i, arr[i]);
    }
    return 0;
}

// Question 4
// Write an array of 3X7 containing multiplication table of 2,7 and 9 resp.

#include<stdio.h>

int main(){
    int arr[3][10];
    for(int i = 0; i < 10; i++){
        arr[0][i] = 2*(i+1);
        arr[1][i] = 7*(i+1);
        arr[2][i] = 9*(i+1);
    }
    for(int i = 0; i <10; i++){
        printf("2X%d = %d\n", i+1, arr[0][i]) ;
        printf("7X%d = %d\n", i+1, arr[1][i]) ;
        printf("9X%d = %d\n", i+1, arr[2][i]) ;
    }
    return 0;
}

// Question 5
// Create a 3D array and print the address of its elements in increasing order
#include<stdio.h>

int main(){
    int arr[2][3][4];
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 4; k++){
                    printf("The address of arr[%d][%d][%d] is %u\n", i,j,k,&arr[i][j][k]);
                }

            }
        }
            

    return 0;
}