/*
Aim:
Swapping numbers(Call by reference)
Algorithm:
>Start
>Declare two integer values x and y
>Assign values x and y
>Call the function swap (&x ,&y)
>Store values of *A in a temp
>Assign values of *B to *A
>Assign value  of temp to *B
>Return to main program
>Stop
Sample output:
Input: x=10, y=20
Output:
After swap: x=20 y=10
*/




#include <stdio.h> 
 
void swap(int *a, int *b) { 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
 
int main() { 
    int x = 10, y = 20; 
             0012,1002 
    swap(&x, &y); 
    printf("After swap: x=%d y=%d\n", x, y); 
    return 0; 
} 