// Write a program to implement Insertion and Deletion operations at customised locations.
#include<stdio.h>
int main(){
    int n, i, new=0, del=0, pos=0, pos1=0;
    printf("Enter the number of array elements: \n");
    scanf("%d", &n);
    int  arr[n];
    printf("Enter the array elements:\n");
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: \n"); // Asking for element to be inserted.
    scanf("%d", &new);
    printf("Enter the position to be inserted: \n"); // Asking for position to be inserted at.
    scanf("%d", &pos);
    if(pos>n){
        printf("Invalid position\n");
    }
    else{
        for(i = n-1; i>=pos; i--){ // Keep shifting the elements to the next array index to make space 
        // for the new element to be inserted.
            arr[i+1]= arr[i];
        }
        arr[pos] = new;
        n++;
        printf("The array after insertion is: \n");
        for(i=0;i<n;i++){
            printf("arr[%d]: ", i);
            printf("%d\n",arr[i]);
        }
    }
    


    printf("Enter the position the element has to be deleted: \n"); // Asking for postion from which 
    // element has to be deleted.
    scanf("%d", &pos1);
    if(pos1>n){
        printf("Invalid position\n");
    }
    else{
        for(i = pos1; i<n-1; i++){ // Shifting array elements by overwriting the element which has to be deleted.
            arr[i]= arr[i+1];
        }
        n--;
        printf("The array after deletion is: \n");
        for(i=0;i<n;i++){
            printf("arr[%d]: ", i);
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
