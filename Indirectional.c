// Program to illustrate the use of indirection operator
#include <stdlib.h>

int main(){
    int x=5;
    int *p=&x;
    *p=5;
    printf("%d",x);
    printf("%d",*p);