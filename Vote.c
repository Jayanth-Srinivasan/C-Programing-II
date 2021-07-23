#include <stdio.h>

int main(){
    int age;
    printf("Enter Age:");
    scanf("%d",&age);
    if(age<18){
        printf("Not eligilbe");
    }
    else{
        printf("Eligible");
    }
    return 0;
}