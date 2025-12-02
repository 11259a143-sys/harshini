/*
Aim: 
To evaluate mathematical expressions using C library functions. 


Algorithm: 
• Start the program. 
• Declare variables. 
• Use sqrt(), log(), pow() from math.h. 
• Display the evaluated results. 
• Stop the program.

Sample output:
πr² = 28.27
(A+B+(2C/3A)+A²+2B) = 26.00
√S(S-A)(S-B)(S-C) = 6.24
log(x³+y³+z³) = 3.04

*/




#include <stdio.h> 
#include <math.h> 
int main() { 
float r=3.0, A=2.0, B=4.0, C=6.0, S=5.0, x=2.0, y=3.0, z=4.0; 
printf("πr² = %.2f\n", M_PI*r*r); 
printf("(A+B+(2C/3A)+A²+2B) = %.2f\n", A+B+(2*C/(3*A))+pow(A,2)+2*B); 
printf("√S(S-A)(S-B)(S-C) = %.2f\n", sqrt(S*(S-A)*(S-B)*(S-C))); 
printf("log(x³+y³+z³) = %.2f\n", log(pow(x,3)+pow(y,3)+pow(z,3))); 
return 0; 
}