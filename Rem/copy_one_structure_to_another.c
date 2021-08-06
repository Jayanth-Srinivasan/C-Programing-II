#include <stdio.h>
#include <string.h>
 
struct student 
{
    int id;
    char name[30];
    float percentage;
};
 
int main() 
{
    int i;
    struct student record1 = {22, "Divya", 86.5};
    struct student record2, *record3, *ptr1, record4;
 
    printf("Records of STUDENT1 - Original Structure \n");
    printf("  Id : %d \n  Name : %s\n  Percentage : %f\n",
            record1.id, record1.name, record1.percentage);
    printf("\nRecords of STUDENT1 - Copied Structure \n");
    record4.id=record1.id;
    strcpy(record4.name, record1.name);
    record4.percentage = record1.percentage;
 
    printf("  Id : %d \n  Name : %s\n  Percentage : %f\n", 
            record4.id, record4.name, record4.percentage);
 
     return 0;
}