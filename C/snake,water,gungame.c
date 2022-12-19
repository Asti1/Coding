#include<stdio.h>
int snakewatergun(char you, char comp){
    if(you==comp){
        return 0;
    }
    if(you == 's' && comp=='w'){
        return 1;
    }
    else{
        return -1;
    }
    if(you == 'w' && comp=='g'){
        return 1;
    }
    else{
        return -1;
    }
    if(you == 's' && comp=='g'){
        return -1;
    }
    else{
        return 1;
    }
    if(you == 'w' && comp=='s'){
        return -1;
    }
    else{
        return 1;
    }
    if(you == 'g' && comp=='w'){
        return -1;
    }
    else{
        return 1;
    }
    if(you == 'g' && comp=='s'){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    char you, comp;
    comp = "s";
    printf("Enter 's' for snake, 'w' for water and 'g' for gun:\n");
    scanf("%c", &you);
    int result = snakewatergun(you, comp);
    printf("You chose %c and comp chose %c \n", you, comp);
    if(result == 0){
        printf("Game draw");
    }
    else if(result==1){
        printf("Congratulations you won");
    }
    else if(result==-1){
        printf("Oops you lost");
    }

    return 0; 
}