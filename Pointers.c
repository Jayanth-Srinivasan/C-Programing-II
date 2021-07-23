//  Program to illustrate the concept of pointers.
#include <stdio.h>

int main(){
    int num,*p1,*p2;
    p1=&num;
    *p1=10;
    p2=p1;
    printf("Value of the variable:%d %d %d\n",num,*p1,*p2);
    printf("Address of the variable:%x %x %x",num,p1,p2);
    return 0;
}
