
#include <stdio.h>

int main(){
    int i,j,k,arr[100][100][100];
    printf("Enter Elements");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
                {
                scanf("%d",&arr[i][j][k]);
                }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
                {
                printf("%d\t",arr[i][j][k]);
                }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}