#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("sample.txt", "r");
    if(ptr == NULL){
        printf("The file is empty\n");
    }
    else{
        fscanf(ptr, "%d", &num);
        printf("The value of %d\n", num);
        fclose(ptr);
    
    }
    return 0;
}