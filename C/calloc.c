#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)calloc(6 , sizeof(int)); // Allocates memory with default value 0 already
    for(int i=0; i<6; i++){
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<6; i++){
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    free(ptr); // To deallocate the memory 
    return 0;
}