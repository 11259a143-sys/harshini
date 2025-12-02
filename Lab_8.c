/*
Aim:
String operations in C
Algorithm:
>Start
>Input a string
>Copy S1 into S2, display S2
>Copy S2 into S3, display S3
>Reverse S3
>Display S3, concatenate S1 and S2
>Display the concatenated string 
>stop
Sample output:
Copied String: First year
Reversed String: raey tsriF
Concatenated String: First yearFirst year

*/

#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char s1[100], s2[100], s3[100]; 
 
    printf("Enter a string: "); 
    gets(s1); 
 
    strcpy(s2, s1); 
    printf("Copied String: %s\n", s2); 
 
    strcpy(s3, s1); 
    strrev(s3); 
    printf("Reversed String: %s\n", s3); 
 
    strcat(s1, s2); 
    printf("Concatenated String: %s\n", s1); 
 
    return 0; 
}