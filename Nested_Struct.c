// Write a C program to display the College and student detail using Nested Structure
#include <stdio.h>

struct College{
    char clgName[100];
    char clgCourse[100];
    struct Student
    {
       char Name[100];
       int Regno;
    }std;
    
};
int main(){
    struct College clg;
    printf("Enter Details of the Student:");
    printf("Name:\nRegistration No:\nName of College:\nCourse:");
    scanf("%s%d%s%s",&clg.std.Name,&clg.std.Regno,&clg.clgName,&clg.clgCourse);
    printf("Name :%s\nCollege:%s\nCourse:%s\nRegistration No: %d\n",clg.std.Name,clg.clgName,clg.clgCourse,clg.std.Regno);
}