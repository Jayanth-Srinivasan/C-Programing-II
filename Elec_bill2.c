#include <stdio.h>

int main(){
    int units;
    float amt;
    printf("Enter unit consumed");
    scanf("%d",&units);
    if(units>=100){
        amt=units*0.90;
    }
    else{
        amt=units*0.80;
    }
    printf("Total Amount is : %.2f",amt);
    return 0;
}