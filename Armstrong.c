// Write a C Program to check the given number is Amstrong number or not using functions
#include <stdio.h>

int armstrong(int num){
    int a,unit,temp,sum=0;
    temp=num;
    while(num>0){
        unit=num%10;
        sum+=unit*unit*unit;
        num=num/10;
    }
    if(temp==sum)
    printf("Given no is an Armstrong no");
    else
    printf("Given no is not an Armstrong no");
    return 0;
}

int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    armstrong(num);
}
