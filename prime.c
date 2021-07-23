#include <stdio.h>

int main(){
    int n,i,c,num;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(num=1;num<=n;num++){
        c=0;
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                c++;
                break;
            }
        }
        if(c==0 && num!=1){
            printf("%d",num);
        }
    }
    return 0;
}