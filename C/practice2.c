//Question 1
//Write a program to find out if a student has passed or failed;if it requires total 40% and at least 33% in each subject to pass.

#include<stdio.h>

int main(){
    int maths;
    int physics;
    int chemistry;
    float percentage;
    printf("Enter marks of maths\n");
    scanf("%d", &maths);
    printf("Enter marks of physics\n");
    scanf("%d", &physics);
    printf("Enter marks of chemistry\n");
    scanf("%d", &chemistry);
    percentage = (physics + chemistry + maths)/3;
    printf("The total percentage is %f\n", percentage);
    if(percentage<40 || physics<33 || chemistry<33 || maths<33){
        printf("FAILED\n");
    }
    else{
        printf("PASSED\n");
    }
    return 0;
}

//Question 2
//Income tax calculation

#include<stdio.h>

int main(){
    float tax = 0;
    float income;
    printf("Enter your income: \n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000){
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000){
        tax = tax + 0.2 * (income - 500000);
    }
    if (income >= 1000000 ){
        tax = tax + 0.3 * (income - 1000000);
    }
    printf("You paid %f amount of tax\n", tax);
    return 0;

}

//Question 3
//Write a program to detect if the year entered by the user is a leap year or not.

#include<stdio.h>

int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if (year % 4 == 0 ){
        printf("Its a leap year\n");
    }
    else {
        printf("Its a not leap year\n");    
    }
    return 0;
}

//Question 4
//Write a program to determine whether the character entered by the user is in lowercase.

#include<stdio.h>

int main(){
    char a;
    printf("Enter the character\n");
    scanf("%c", &a);
    if (a <= 122 && a >= 97){
        printf("It is lowercase\n");
    } 
    else{
        printf("Its not lowercase\n");
    }
    return 0;
}