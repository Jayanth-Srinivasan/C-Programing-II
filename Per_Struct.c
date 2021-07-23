// Write a C program to Percentage of a Student using structure
#include <stdio.h>

struct Percentage
{
    int subs;
    float percent;
};

int main(){
    struct Percentage per;
    printf("Enter no of subjects:");
    scanf("%d",&per.subs);
    int i,marks[per.subs],total=0;
    for(i=1;i<=per.subs;i++){
        printf("Enter marks scored in Subject %d :",i);
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    per.percent=(float)((float)total/(float)500)*100;
    printf("Total Marks Scored:%d\nPercentage:%.2f",total,per.percent);
}