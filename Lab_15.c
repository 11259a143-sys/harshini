/*
Aim:
Pointer artematic

Algorithm:
>Start
>Declare an array arr of 5 integers:{10,20,30,40,50}
>Declare a pointer P and assign it to point to the first element of the array(p=arr)
>Set loop counter i=0
>Repeat while i<5
>End loop
>Stop

Sample output:
Value = 10
Value = 20
Value = 30
Value = 40
Value = 50

*/



#include <stdio.h> 
 
int main() { 
    int arr[5] = {10, 20, 30, 40, 50}; 
    int *p = arr; 
 
    for (int i = 0; i < 5; i++) { 
        printf("Value = %d\n", *(p + i)); 
    } 
 
    return 0; 
} 