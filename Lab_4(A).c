/*
Aim:
To find  sum of series using loop

Algrorithm:
>Start
>Declare integer variables
>Print
>Read the value of n from the user
>Set i=1
>Repeat step 7& while i<=1;
>Print 
>Stop
Sample output:
Sum of series = 15
*/



int main() { 
    int n, sum = 0; 
    printf("Enter n: "); 
    scanf("%d", &n); 
 
    for(int i = 1; i <= n; i++) 
        sum += i; 
 
    printf("Sum of series = %d\n", sum); 
    return 0; 
}