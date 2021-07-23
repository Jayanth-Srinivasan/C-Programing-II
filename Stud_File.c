// Write a program to read name and marks of n number of students and store them in a file.
#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[100];
    int i,n,marks;
    FILE *fsave;
    fsave=(fopen("C:\\Users\\guest_user\\Desktop\\Projects\\PPS Model Prac\\record.txt","w"));
    if(fsave==NULL){
        printf("E");
        exit(1);
    }
    printf("Enetr no of students:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter Name and marks of Student %d\n",i);
        scanf("%s%d",&name,&marks);
        fprintf(fsave,"\nName: %s   Marks : %d \n",name,marks);
    }
    fclose(fsave);
    return 0;
}