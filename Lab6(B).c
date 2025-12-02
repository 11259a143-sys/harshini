/*
Aim:
Insertion short
Algorithm:
>Start
>Input n
>Input elements into array[n] outerloop increment
>Repeat Outerloop
>Print sorted array
>Stop
Sample output:
Sorted array: 1 2 5 8

*/



#include <stdio.h> 
int main() { 
    int n, i, j, key; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    int a[n]; 
 
    printf("Enter elements: "); 
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
 
    for(i = 1; i < n; i++) { 
        key = a[i]; 
        j = i - 1; 
        while(j >= 0 && a[j] > key) { 
            a[j + 1] = a[j]; 
            j--; 
        } 
        a[j + 1] = key; 
    } 
 
    printf("Sorted array: "); 
    for(i = 0; i < n; i++) 
        printf("%d ", a[i]); 
    return 0; 
}