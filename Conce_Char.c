// Write a C program to accept a character as input and print its 3 consecutive characters as
// output.
#include <stdio.h>

int main(){
    char c,temp;
    printf("Enter A Char:");
    scanf("%c",&c);
    if(c>=120 && c<=122){
        temp=c-23;
        printf("The consecutive characters are: %c %c %c",temp,temp+1,temp+2);
    }
    else if(c>=88 && c<=90){
        temp=c-23;
        printf("The consecutive characters are: %c %c %c",temp,temp+1,temp+2);
    }
    else{
        printf("The consecutive characters are: %c %c %c",c+1,c+2,c+3);
    }
    return 0;
}