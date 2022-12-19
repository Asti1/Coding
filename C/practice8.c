// Question 1
// Write a program to read 3 integers from the file 
/*
#include<stdio.h>

int main(){
    int a,b,c;
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The values of a,b,c are %d,%d,%d\n", a,b,c);
    fclose(ptr);
    return 0;
}
*/
// Question 2
// Write a program to generate a multiplication table of a number in txt format
#include<stdio.h>

int main(){
    int a;
    printf("Enter the intger you need the table of:\n");
    scanf("%d", &a);
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    for(int i=0; i<10; i++){
        fprintf(ptr , "%dX%d = %d\n", a, (i+1), a*(i+1));
    }
    fclose(ptr);
    return 0;
}