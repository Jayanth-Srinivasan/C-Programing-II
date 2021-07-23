#include <stdio.h>

int main(){
    int n,i,fact=1;
    printf("Enter the no.:");
    scanf("%d",&n);
    for(i=0;i<=n;++i){
        fact*=i;
    }
    printf("Factorial:%d",fact);
    return 0;
}