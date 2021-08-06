// Write a C program to add all the numbers entered by a user until user enters 0.
#include <stdio.h>

int main(){
    int num, sum = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
 
    }while(num != 0);

    printf("Total = %d",sum);
    return 0;
}