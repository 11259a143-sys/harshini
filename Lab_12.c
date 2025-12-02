/*
Aim:
Structure-student info
Algorithm:
>Start
>Define astructure student 
>Declare a structure variable(S) of type student
>Prompt the user to enter Roll number ,Name and Marks
>Read the values 
>Display the stored student details 
>Stop
Sample output:
Input: roll=1, name=harshi, marks=85.5
Output:
Student Details:
Roll: 1
Name: harshi
Marks: 85.50

*/


#include <stdio.h> 
 
struct Student { 
    int roll; 
    char name[20]; 
    float marks; 
}; 
 
int main() { 
    struct Student s; 
 
    printf("Enter roll, name and marks: "); 
    scanf("%d %s %f", &s.roll, s.name, &s.marks); 
 
    printf("Student Details:\n"); 
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks); 
 
    return 0; 
}