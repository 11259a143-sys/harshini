/*
Aim:
Union example
Algorithm:
>Start
>Declare a union data 
>Declare a union variable d
>Assign roll to d.roll
>Display d.roll
>Assign 89.5 to d.marks
>Display d.marks
>Stop
Sample output:
Output:
Roll = 101
Marks = 89.50


*/




#include <stdio.h> 
 
union Data { 
    int roll; 
    float marks; 
}; 
 
int main() { 
    union Data d; 
    d.roll = 101; 
    printf("Roll = %d\n", d.roll); 
 
    d.marks = 89.5; 
    printf("Marks = %.2f\n", d.marks); 
 
    return 0; 
}