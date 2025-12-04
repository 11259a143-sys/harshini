/*
Aim: 
To understand and demonstrate the use of basic data types in C. 

Algorithm: 
• Start the program. 
• Declare variables a,b,c,d of different data types
• Display values using printf() for the chosen data type.
. assign the initial value to the variable during declaration.
. perform operations.
• Stop the program.

Sample output:
Integer: 10
Float: 5.50
Character: A
Double: 123.457
    */

#include<studio.h>
int main(){
    int a=10;
    float b=5.5;
    char c='A';
    double d=123.456789;
    printf("integer:%d\n",a);
    printf("float:%.2f\n",b);
    printf("character:%c\n",c);
    printf("double:%.3lf\n",d);
    return 0;

}

