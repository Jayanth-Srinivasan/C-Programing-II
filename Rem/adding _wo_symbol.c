// Write a C program to take multiple inputs (with different data types) from the user using only one scan statement and perform an addition without using + operator 
#include <stdio.h>

int main(){
    int a,sum;
    float b;
    double c;
    printf("Enter the nos");
    scanf("%d %f %ld",&a,&b,&c);
    sum=(a-((int)-b))-((int)-c);
    printf("Sum: %d",sum);
    return 0;
}