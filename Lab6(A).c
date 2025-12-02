/*
Aim:
Bubble sort
Algorithm:
>Start
>Input the no.of element, n and array elements
>Repeat i=0 to n-i-z;
>If current element a{j} is > the next element a{j+1}
>Swap a{j} and a{j+1}
>Output
>Stop
Sample output:
Sorted array: 1 2 5 8

*/

#include <stdio.h> 
int main() { 
    int n, i, j, temp; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    int a[n]; 
 
    printf("Enter elements: "); 
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
 
    for(i = 0; i < n-1; i++) 
        for(j = 0; j < n-i-1; j++) 
            if(a[j] > a[j+1]) { 
                temp = a[j]; 
                a[j] = a[j+1]; 
                a[j+1] = temp; 
            } 
 
    printf("Sorted array: "); 
    for(i = 0; i < n; i++) 
        printf("%d ", a[i]); 
    return 0; 
} 