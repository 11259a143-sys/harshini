/*
Aim:
To find sum of series using whike loop
Algorithm:
>Start 
>Declare integer variables
>Enter the value of n and read it
>While i is less than or equal to n,do add;
to sum increament; by i
>Print 
>Stop
Sample output:
Sum of series = 15

*/



#include <stdio.h> 
int main() { 
    int n, i = 1, sum = 0; 
    printf("Enter n: "); 
    scanf("%d", &n); 
 
    while(i <= n) { 
        sum += i; 
        i++; 
    } 
 
    printf("Sum of series = %d\n", sum); 
    return 0; 
}