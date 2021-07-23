#include <stdio.h>

int main()
{
    char name[20],gender[10];
    int age;
    printf("Enter Your Name: ");
    scanf("%s",name);
    printf("Enter Your Age: ");
    scanf("%d",&age);
    printf("Enter Your Gender: ");
    scanf("%s",gender);
    printf("Your details are\n Name: %s\n Age: %d\n Gender: %s",name,age,gender);
    return 0;
}