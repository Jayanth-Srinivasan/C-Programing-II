#include <stdio.h>
#include <math.h>

int main(){
    int pri,rat,tym,si,ci,temp;
    printf("Enter the Principle,Intrest,Time:");
    scanf("%d %d %d",&pri,&rat,&tym);
    si=(pri*rat*tym)/100;
    temp=pri*(1+rat);
    ci=pow(temp,tym);
    printf("SI:%d\nCI:%d",si,ci);
    return 0;
}