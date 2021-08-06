// Write a C program to demonstrate the impact of Global and Local variables.
#include <stdio.h>
int a =10;

int main(){
    int a=20,b=30;
    printf("Variable: a: %d, b: %d",a,b);
    func();
    printf("Printing Variables after calling: a: %d, b: %d",a,b);
    return 0;
}

void func() {
    int a=50,b=60;
    printf("Variable inside Function : a: %d, b: %d",a,b);
}