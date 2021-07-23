#include <stdio.h>

int main(){
    int a,b,c,sum=0,avg;
    printf("Enter the nos:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("Sum:%d\nAvg:%d",sum,avg);
    return 0;
}