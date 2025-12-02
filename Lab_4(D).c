/*
Aim:
To check the number whether prime or not
Algoritm:
>Start
>Declare integer values
>Enter a number given by user and read
>For i fro 2 to n/2
     n%i==0;
     flag=1
>Else,print
>stop
Sample output:
17 is a Prime number     

*/




#include <stdio.h> 
int main() { 
    int n, flag = 0; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
 
    for(int i = 2; i <= n/2; i++) { 
        if(n % i == 0) { 
            flag = 1; 
            break; 
        } 
    } 
 
    if(flag == 0) 
        printf("%d is a Prime number\n", n); 
    else 
        printf("%d is not a Prime number\n", n); 
 
    return 0; 
} 