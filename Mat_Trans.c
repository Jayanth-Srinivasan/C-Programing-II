// To write a program to find the transpose of the matrix.
#include <stdio.h>

int main(){
    int r,c,a[100][100],i,j,trans[100][100];
    printf("Enter the number of rows & columns:");
    scanf("%d%d", &r,&c);

    printf("\nEnter elements matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
        printf("Enter element a%d%d: ", i + 1, j + 1);
        scanf("%d", &a[i][j]);
        }
    for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
        trans[j][i] = a[i][j];
    }
    printf("\ntranspose :\n");
    for (int i = 0; i < c; ++i)
    for (int j = 0; j < r; ++j) {
        printf("%d  ", trans[i][j]);
        if (j == r - 1)
        printf("\n");
    }
}