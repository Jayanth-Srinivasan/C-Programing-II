#include <stdio.h>

int main(){
    int r,c,i,j,a[100][100],b[100][100],cnt=1;
    printf("Enter the no of rows and cloumns:");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of matrix::");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("a%d%d:",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                b[j][i]=a[i][j];
            }
        }
        if(r==c){
            for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(a[i][j]!=b[i][j]){
                    cnt++;
                    break;
                    }  
                }
            }
            if(cnt==1){
                printf("The Given Matrix is Symmetric");
            }
            else{
                printf("The Given Matrix is Not Symmetric");
            }
        }
        else{
            printf("The Given Matrix is Not Symmetric");
        }
    return 0;
}