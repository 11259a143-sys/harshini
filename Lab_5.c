/*
Aim:
Linear search
Algorithm:
>Start
>Input no.of elements,Array elements
>Set found > 0
>For i=0 to n-1
>Element found at position i+1
>Stop
Sample output:
Element found at position 2

*/




#include <stdio.h> 
int main() { 
    int n, key, i, found = 0; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    int arr[n]; 
    printf("Enter elements: "); 
    for(i = 0; i < n; i++) 
        scanf("%d", &arr[i]); 
 
    printf("Enter element to search: "); 
    scanf("%d", &key); 
 
    for(i = 0; i < n; i++) { 
        if(arr[i] == key) { 
            printf("Element found at position %d\n", i + 1); 
            found = 1; 
            break; 
        } 
    } 
 
    if(!found) 
        printf("Element not found.\n"); 
 
    return 0; 
} 