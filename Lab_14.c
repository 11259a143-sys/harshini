/*
Aim:
Array of structure
Algorithm:
>Start
>Define structure student containing: roll(int).name(string)
>Declare Array
>Set  counter i=0
>Repeat while i<3
>Print "student list"
>Set i=0
>Repeat while i<3
>Stop
Sample output:
Input:
Roll & Name 1 John
Roll & Name 2 Alice
Roll & Name 3 Bob
Output:
Student List:
1 John
2 Alice
3 Bob

*/


#include <stdio.h> 
 
struct Student { 
    int roll; 
    char name[20]; 
}; 
 
int main() { 
    struct Student s[3]; 
    int i; 
 
    for (i = 0; i < 3; i++) { 
        printf("Enter roll & name: "); 
        scanf("%d %s", &s[i].roll, s[i].name); 
    } 
 
    printf("\nStudent List:\n"); 
    for (i = 0; i < 3; i++) { 
        printf("%d  %s\n", s[i].roll, s[i].name); 
    } 
 
    return 0; 
} 