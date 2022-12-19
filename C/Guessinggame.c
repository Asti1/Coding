//GUESSING GAME
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number;
    int a;
    int guesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;// Generates random number between 1 and 100
    do{
        printf("Guess the number between 1 - 100:\n");
        scanf("%d", &a);
        
        if (a < number){
            printf("Guess a higher number\n");
        }
        else if (a > number){
            printf("Guess a lower number\n");
        }
        else{
            printf("You guessed in %d attempts!\n", guesses);
        }
        guesses++;
    }while(a != number);
    return 0;
}