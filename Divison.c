// . Accept two integers as input. Perform division operation on those numbers and print
// the answer with / without float type conversion.
#include <stdio.h>

int main(){
    int a,b,idiv;
    float fdiv;
    printf("Enter 2 nos:");
    scanf("%d%d",&a,&b);
    idiv=a/b;
    fdiv=(float)a/b;
    printf("Division:\nINT:%d\nFLOAT:%f",idiv,fdiv);
    return 0;
}