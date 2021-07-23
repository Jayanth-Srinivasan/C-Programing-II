#include <stdio.h>
int sum(int n){
    int add,i;
    for(i=0;i<=n;i++){
        add= add+i;
    }
    printf("%d",add);
}
int main()
{int x;
printf("enter a number: ");
scanf("%d",&x);
sum(x);

return 0;
} 