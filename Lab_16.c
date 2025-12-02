/*
Aim:
Basic file operations
Algorithm:
>Start
>Declare a file pointer
>Declare a character arraytext[100]
>open the file "sample.text"in write mode
>Write the string "Hello file!" into the file using printf()
>Close the file
>Open the file "sample.txt" in read mode
>Display  text on the screen using printf()
>Stop
Sample output:
File Content: Hello File!


*/



#include <stdio.h> 
 
int main() { 
FILE *fp; 
char text[100]; 
fp = fopen("sample.txt", "w"); 
fprintf(fp, "Hello File!"); 
fclose(fp); 
fp = fopen("sample.txt", "r"); 
fgets(text, 100, fp); 
printf("File Content: %s\n", text); 
fclose(fp); 
return 0; 
}