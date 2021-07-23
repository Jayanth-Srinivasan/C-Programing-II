#include <stdio.h>

int main(){
    int cp,sp,cal;
    printf("Enetr cp and sp");
    scanf("%d %d",&cp,&sp);
    if(sp<cp){
        printf("LOSS");
    }
    else{
        printf("PROFIT");
    }
    return 0;
}