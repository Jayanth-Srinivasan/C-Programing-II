// Write a C program for Passing string to a function t
#include <stdio.h>

void t(char str[100]){
    printf("Entered String:");
    puts(str);
}

int main(){
    char str[100];
    printf("Enter a String:");
    gets(str);
    t(str);
    return 0;
}