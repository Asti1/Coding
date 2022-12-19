// Question 1
// Create a 2D vector using structures

#include<stdio.h>
struct vector {
    int x, y;
};
int main(){
    struct vector v1 , v2;
    v1.x = 34;
    v1.y = 56;
    printf("X dimension is %d and Y dimension is %d\n", v1.x, v1.y);
    v2.x = 12;
    v2.y = 78;
    printf("X dimension is %d and Y dimension is %d\n", v2.x, v2.y);

    return 0;
}

// Question 2
// Write a function sumvector which returns the sum of two vectors passed to it

#include<stdio.h>
struct vector {
    int x, y;
};
struct vector sumvector(struct vector v1 , struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main(){
    struct vector v1 , v2, sum;
    v1.x = 34;
    v1.y = 56;
    printf("X dimension is %d and Y dimension is %d\n", v1.x, v1.y);
    v2.x = 12;
    v2.y = 78;
    printf("X dimension is %d and Y dimension is %d\n", v2.x, v2.y);
    sum = sumvector(v1 , v2);
    printf("X dimension of result is %d and Y dimension is %d\n", sum.x, sum.y);

    return 0;
}

// Question 3
// Write a structure to store dates , and a function to compare those dates
#include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;
void display(date d){
    printf("The date is %d/%d/%d\n", d.year, d.month, d.date);
}
int datecmp(date d1, date d2){
    if(d1.year > d2.year){
        if(d1.month> d2.month){
            if(d1.date > d2.date){
                printf("%d/%d/%d is early\n", d2.year, d2.month, d2.date);

            }
        }
    }
    else{
        printf("%d/%d/%d is early\n", d1.year, d1.month, d1.date);
    }
}
int main(){
    date d1 = {1, 7 , 22};
    date d2 = {1, 7 , 32};
    display(d1);
    display(d2);
    datecmp(d1, d2);
    return 0;
}