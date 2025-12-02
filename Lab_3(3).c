/*
Aim:
To do artematic operations using switch case
Algortihm:
>Start the program
>Declare three variables
>Read two numbers
>Display the menu
>Read user's choice
>Use a switch statement 
>Stop
Sample output:
Product = 50
*/




#include <stdio.h> 
int main() { 
    int a, b, choice; 
    printf("Enter two numbers: "); 
    scanf("%d %d", &a, &b); 
 
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n"); 
    printf("Enter your choice: "); 
    scanf("%d", &choice); 
 
    switch(choice) { 
        case 1: printf("Sum = %d\n", a + b); break; 
        case 2: printf("Difference = %d\n", a - b); break; 
        case 3: printf("Product = %d\n", a * b); break; 
        case 4: printf("Quotient = %.2f\n", (float)a / b); break; 
        default: printf("Invalid choice\n"); 
    } 
    return 0; 
}