// Question 1
// Printing the area of rectangle using the input during coding as well as user asked inputs
# include<stdio.h>

int main()
{
    int a = 12;
    int b = 14;
    int c, d;
    printf("The area of rectangle is %d \n", a*b);
    printf("Now you enter the dimensions of the rectangle:\n ");
    printf("Enter the length & breadth of the rectangle:\n");
    scanf("%d \n", &c);
    scanf("%d", &d);
    printf("The area of rectangle is %d \n", c*d);
    return 0;

}



// Question 2
// Printing the area of circle and modifying the program to print the volume of cylinder as well

# include<stdio.h>

int main(){
    int radius = 3;
    int height = 5;
    printf("The area of the circle is %d \n", (22/7) * radius * radius);
    printf("The volume of cylinder is %d \n", (22/7) * radius * radius * height);
    
    return 0;
}



// Question 3
// Printing the value of celcius temp in fahrenheit

#include<stdio.h>

int main(){
    float celcius = 3;
    float far = (celcius * 9/5) + 32;
    printf("The value of this celcius temperature in fahrenheit is %f \n", far);

    return 0;
}



// Question 4
// Calculating simple interest for a set of values
#include<stdio.h>

int main(){
    int principle = 100, rate = 5, years = 10;
    int simpleinterest = (principle * rate * years)/100;
    printf("The value of simple interest is %d \n", simpleinterest);

    return 0;
}

