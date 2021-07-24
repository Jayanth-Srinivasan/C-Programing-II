#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[100];
    int i,n,salary;
    FILE *fsave;
    fsave=(fopen("stores.txt","w"));
    if(fsave==NULL){
        printf("E");
        exit(1);
    }
    printf("Enetr no of employees:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter Name and salary of employee %d\n",i);
        scanf("%s%d",&name,&salary);
        fprintf(fsave,"\nName: %s   salary : %d \n",name,salary);
    }
    fclose(fsave);
    return 0;
}