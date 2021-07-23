// Write a C program to check the identity of the matrix
#include <stdio.h>

int main(){
    int r,c,i,j,check=1,mat[100][100];
    printf("Enter no of rows n columns:");
    scanf("%d%d",&r,&c);
    if(r!=c){printf("Not a Square matrix");}
    else{
        printf("Enter the elements of matrix::");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("a%d%d:",i+1,j+1);
                scanf("%d",&mat[i][j]);
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(mat[i][j]!=1&&mat[j][i]!=0){
                    check=0;
                    break;
                }
            }
        }
        if(check==1)
        printf("Matrix is Identical!");
        else
        printf("Matrix is not Identical!");
    }
    return 0;
}