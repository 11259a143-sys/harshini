/*
Aim:
TO find finbanoci series
Algorithm:
>Start
>Declare integer
>Input the no.of terms by user
>Print message"fibonaci series:"
>For i i from 1 to n;do;
>Print
>Stop
Sample output:
Fibonacci Series: 0 1 1 2 3 5 8

*/




#include <stdio.h> 
int main() { 
    int n, a = 0, b = 1, next; 
    printf("Enter number of terms: "); 
    scanf("%d", &n); 
 
    printf("Fibonacci Series: "); 
    for(int i = 1; i <= n; i++) { 
        printf("%d ", a); 
        next = a + b; 
        a = b; 
        b = next; 
    } 
    return 0; 
} 