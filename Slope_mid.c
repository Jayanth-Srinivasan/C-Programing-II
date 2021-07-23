#include <stdio.h>

int main(){
    int x1,x2,y1,y2,s,mx,my;
    printf("Enter X1,X2,Y1,Y2");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    s=(y2-y1)/(x2-x1);
    mx=(x1+x2)/2;
    my=(y1+y2)/2;
    printf("SLOPE:%d\nMID POINT:%d,%d",s,mx,my);
    return 0;
}