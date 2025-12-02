/*
Aim:
Matrix Manupulation
Algorithm:
>Start
>Input matrix size[n]
>Input matrix A;
>Input matrix B;
>Perform and display matrix addition
>Perform and display matrix subtraction
>Perform and display matrix multiplication
>Stop
ample output:
Matrix A: 1 2
          3 4

Matrix B: 5 6
          7 8

Addition of Matrices:
6 8
10 12

Subtraction of Matrices:
-4 -4
-4 -4

Multiplication of Matrices:
19 22
43 50

*/




#include <stdio.h> 
int main() { 
    int a[10][10], b[10][10], c[10][10], i, j, k, n; 
 
    printf("Enter size of square matrix: "); 
    scanf("%d", &n); 
 
    printf("Enter elements of Matrix A:\n"); 
    for(i = 0; i < n; i++) 
        for(j = 0; j < n; j++) 
            scanf("%d", &a[i][j]); 
 
    printf("Enter elements of Matrix B:\n"); 
    for(i = 0; i < n; i++) 
        for(j = 0; j < n; j++) 
            scanf("%d", &b[i][j]); 
 
    // Addition 
    printf("\nAddition of Matrices:\n"); 
    for(i = 0; i < n; i++) { 
        for(j = 0; j < n; j++) { 
            c[i][j] = a[i][j] + b[i][j]; 
            printf("%d ", c[i][j]); 
        } 
        printf("\n"); 
    } 
 
    // Subtraction 
    printf("\nSubtraction of Matrices:\n"); 
    for(i = 0; i < n; i++) { 
        for(j = 0; j < n; j++) { 
            c[i][j] = a[i][j] - b[i][j]; 
            printf("%d ", c[i][j]); 
        } 
        printf("\n"); 
    } 
 
    // Multiplication 
    printf("\nMultiplication of Matrices:\n"); 
    for(i = 0; i < n; i++) { 
        for(j = 0; j < n; j++) { 
            c[i][j] = 0; 
            for(k = 0; k < n; k++) 
                c[i][j] += a[i][k] * b[k][j]; 
            printf("%d ", c[i][j]); 
        } 
        printf("\n"); 
    } 
 
    return 0; 
} 