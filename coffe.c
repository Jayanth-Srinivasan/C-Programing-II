#include <stdio.h>

int main(){
    float cp,sp,sum=0;
    printf("Enter the Prices of Coffee and Samosa:");
    scanf("%f %f",&cp,&sp);
    sum=(float)cp+sp;
    printf("Total AMount:%.2f",sum);
    return 0;
}