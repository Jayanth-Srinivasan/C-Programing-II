// Write a C program to swap two numbers using functions
#include <stdio.h>

int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Swapped Result:%d %d",a,b);
}

int main(){
    int a,b;
    printf("Enter Two nos:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}