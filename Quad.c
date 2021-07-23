// Write a C program to find the roots of quadratic equations.
#include <stdio.h>
#include <math.h>

float quadroot(float a,float b,float c){
    float n1,n2,d;
    d=b*b-4*a*c;
    if(d>0){
        n1=-b+sqrt(d)/2*a;
        n2=-b-sqrt(d)/2*a;
        return n1,n2;
    }
    else if(d==0){
        n1=-b/2*a;
        n2=-b/2*a;
        return n1,n2;
    }
    else{
        printf("Imaginary Roots");
    }
}
int main(){
    float a,b,c;
    printf("Enter the co-effcients a b c:");
    scanf("%f%f%f",&a,&b,&c);
    printf("Roots are %f %f",quadroot(a,b,c));
}