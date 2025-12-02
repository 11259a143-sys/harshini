/*
Aim: 
To understand and demonstrate the use of basic data types in C. 

Algorithm: 
• Start the program. 
• Declare variables of different data types. 
• Display values using printf(). 
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

