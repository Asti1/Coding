#include<stdio.h>
#define n 5
int queue[n];
int front = -1;
int rear = -1;
// Entering values in queue
void enqueue(){
    int x;
    printf("Enter the number you want to add in the queue: \n");
    scanf("%d",&x);
    if(rear==n-1){
        printf("Queue Overflow"); // Full Queue condition
    }
    else if(rear==-1 && front==-1){
        rear++;
        front++;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
}
// Deleting values from queue
void dequeue(){
    int deletedItem;
    if(front==-1 && rear == -1){
        printf("Queue Underflow"); // Empty queue condition
    }
    else if(rear==0){
        deletedItem = queue[front];
        front=-1;
        rear=-1;
        printf("The deleted item is %d\n",deletedItem); 
    }
    else{
        deletedItem = queue[front];
        front++;
        printf("The deleted item is %d\n",deletedItem); 
    }
}
void peek(){
    if(front==-1 && rear==-1){
        printf("Queue Underflow");
    }
    else{
        printf("The top element on the queue is %d\n",queue[front]);
    }
}
void display(){
    int i;
    for(i=front;i<=rear;i++){
         printf("%d\n",queue[i]); 
    }
}

int main(){
    int ch;
    do{
        printf("--------MENU--------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
                enqueue();
                break;
            case 2:
                dequeue();
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
