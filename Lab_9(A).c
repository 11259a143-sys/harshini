/*
Aim:
Swapping numbers(Call by value)
Algorithm:
>Start
>Declare 2 integer value x and y
>Assign values x=10;y=20;
>Call the function swap(x,y);
>Copy the values x and y into a and b
>Store A in a temporary variable temp
>Assign B to A
>Assign temp to B
>Print swapped values of A and B
>Print values of x and y
>Stop   
Sample output:
Input: x=10, y=20
Output:
Inside function (Call by Value): a=20 b=10
Outside function: x=10 y=20


*/



#include <stdio.h> 
 
void swap(int a, int b) { 
    int temp = a; 
    a = b; 
    b = temp; 
    printf("Inside function (Call by Value): a=%d b=%d\n", a, b); 
} 
 
int main() { 
    int x = 10, y = 20; 
                
    swap(x, y); 
    printf("Outside function: x=%d y=%d\n", x, y); 
    return 0; 
}