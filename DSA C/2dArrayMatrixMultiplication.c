// Write a program to perform multiplication of two matrices using functions.
#include <stdio.h>
void multiply(int a[10][10], int b[10][10], int, int, int);
int main()
{
    int a[10][10], b[10][10];
    int m, n, p, sum;

    printf("Enter the number of rows and columns in First Matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter the element of First Matrix\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Enter a[%d][%d] number\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of columns in second matrix\n");
    scanf("%d", &p);
    printf("Enter the elements of Second Matrix\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            printf("Enter b[%d][%d] number\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("First matix is: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Second matix is: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    if (n != p) {
        printf("The number of columns in Matrix-1  must be equal to the number of rows in Matrix-2\n");
        printf("Please update the values and run again\n");
    }
    else{
        printf("Multiplication of both Matrix is: \n");
        multiply(a, b, m, n, p);
    }
    return 0;
}
void multiply(int a[10][10], int b[10][10], int m, int n, int p)
{
    int sum[10][10];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            sum[i][j] = 0;
            for (int k = 0; k < n; k++){
                sum[i][j] = sum[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
