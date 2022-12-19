#include<stdio.h>
#define n 5
int stack[n];
int top = -1;
void push(){
    int x;
    printf("Enter the number you want to push on to the stack: \n");
    scanf("%d",&x);
    if(top==n-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        stack[top] = x;
    }
}
void pop(){
    int poppedItem;
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        poppedItem = stack[top];
        top--;
        printf("The popped item is %d\n",poppedItem); 
    }
}
void peek(){
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("The top element on the stack is %d\n",stack[top]);
    }
}

void display(){
    int i;
    for(i=top;i>=0;i--){
         printf("%d\n",stack[i]); 
    }
}

int main(){
    int ch;
    do{
        printf("--------MENU--------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("Invalid Choice\n");
        }
    }while(ch!=0);
    return 0;
}
