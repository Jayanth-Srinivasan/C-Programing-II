#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char name[20];
    int roll;
    float marks;
    printf("Enter Student name: ");
    scanf("%s",name);
    printf("Enter Student roll_no: ");
    scanf("%d",&roll);
    printf("Enter Student marks: ");
    scanf("%f",&marks);
    fp  = fopen("StuData.txt", "w");
    if(fp == NULL){
        printf("error");
        exit(0);
    }else{
        fprintf(fp,"Name of student: %s\n",name);
        fprintf(fp,"Roll_no of student: %d\n",roll);
        fprintf(fp,"Marks of student: %.2f\n",marks);
    }
    printf("File created");
    return 0;
}