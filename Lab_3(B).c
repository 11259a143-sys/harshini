/*
Aim:
To find even or odd
Algorithm:
>Start the program
>Declare a variable
>Display the evaluted results
>Stop the program
Sample output:
7 is Odd
*/
#include <stdio.h> 
int main() { 
    int num; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
 
    if(num % 2 == 0) 
        printf("%d is Even\n", num); 
    else 
        printf("%d is Odd\n", num); 
 
    return 0; 
}