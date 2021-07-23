#include <stdio.h>

int main()
{
    float temp;
    printf("Enter temperature is Celsius: ");
    scanf("%f",&temp);
    if(temp < 20){
        printf("The Weather is cool");
    }else if(temp < 30){
        printf("The Weather is warm");
    }else{
        printf("The Weather is hot");
    }
    return 0;
}
