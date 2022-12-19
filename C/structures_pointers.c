#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    (*ptr).code = 100;
    ptr->salary = 10000; // instead of using (*ptr).code we can use ptr -> code
    strcpy((*ptr).name, "Asti");
    printf("%d", e1.code);
    printf("%f", e1.salary);
    return 0;
}