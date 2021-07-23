#include <stdio.h>

int main(){
    int l,b;
    float ar,peri;
    printf("Enter the Lenght & Width of Rec:");
    scanf("%d %d",&l,&b);
    ar=l*b;
    peri=2*(l+b);
    printf("Area:%.2f\nPerimeter:%.2f",ar,peri);
    return 0;
}