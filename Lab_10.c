/*
Aim:
Factorial using recursion
Algorithm:
>Start
>Declare integer variable n
>Read value of n from user 
>Call the function fact(n)
>Inside the function fact(n)
>Display the returned factorial value
>Stop
Sample output:
Input: 5
Output:
Factorial = 120

*/


#include <stdio.h> 
 
int fact(int n) { 
    if (n == 0) 
        return 1; 
    return n * fact(n - 1); 
} 
 
int main() { 
    int n; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
 
    printf("Factorial = %d\n", fact(n)); 
    return 0; 
}