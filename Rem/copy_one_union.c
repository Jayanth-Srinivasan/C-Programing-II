#include <stdio.h>
#include <string.h>
 
union student 
{
    int id;
};
 
int main() 
{
    int i;
    union student record1 = {22};
    union student record2, *ptr1, record3;
 
    printf("Records of STUDENT1 - Original Union \n");
    printf("  Id : %d ",record1.id);
    printf("\nRecords of STUDENT1 - Copied Union \n");
    record3.id=record1.id;
    printf("  Id : %d",record3.id);
    return 0;
}