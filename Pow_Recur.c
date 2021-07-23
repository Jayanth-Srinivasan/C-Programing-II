// Write a C program to find a power of a number using recursion
#include <stdio.h>

int pow(int base, int expo){
    if(expo!=0){
        return(base*pow(base,expo-1));
    }
    else{
        return 1;
    }
}

int main(){
    int b,e;
    printf("Enter the Base & Exponent of the powers:");
    scanf("%d %d",&b,&e);
    printf("Answer:%d",pow(b,e));
    return 0;
}