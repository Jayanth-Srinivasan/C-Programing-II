// The Caesar Cipher technique is one of the earliest and simplest methods of encryption
// technique. It’s simply a type of substitution cipher, i.e., each letter of a given text is replaced by
// a letter some fixed number of positions down the alphabet. For example with a shift of 1, A
// would be replaced by B, B would become C, and so on. Write a C program to get a character as
// input and print its corresponding cipher (use 3 as shift key).
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100],encrp[100];
    int i,stand;
    printf("Enter the String to be Encrypted:");
    scanf("%s",str);
    for(i=0;i<sterlen(str);i++){
        if(isupper(str[i])){
            encrp[i]=((str[i]+3-65)%26)+65;

        }
        else{
            encrp[i]=((str[i]+3-97)%26)+97;
        }
    }
    printf("%s",encrp);
    return 0;
}