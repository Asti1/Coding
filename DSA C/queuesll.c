#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *front = NULL,*rear = NULL;
void enqueue(){
    // No full queue condition in linked list as its dynamically allocated.
    struct node *newnode;
    int x;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the number you want to add in the queue: \n");
    scanf("%d",&x);
    newnode->data = x;
    newnode->next = NULL;
    if(front==NULL && rear == NULL){
        front = rear = newnode;
    }    
    else{
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue(){
    int deletedItem;
    if(front==NULL && rear == NULL){
        printf("Queue Underflow"); // Empty queue condition
    }
    else if(rear==front){
        deletedItem = rear->data;
        front=NULL;
        rear=NULL;
        printf("The deleted item is %d\n",deletedItem);
    }
    else{
        deletedItem = front->data;
        front++;
        printf("The deleted item is %d\n",deletedItem); 
    }
}
void peek(){
    if(front==NULL && rear==NULL){
        printf("Queue Underflow");
    }
    else{
        printf("The first element on the queue is %d\n",front->data);
    }
}
void display(){
    struct node *ptr=0;
    ptr = front;
    while(ptr){
         printf("%d\n",ptr->data); 
         ptr=ptr->next;
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
