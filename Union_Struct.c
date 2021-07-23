//  Write a C program to know the differentiation between the size of the union and
// structure
#include <stdio.h>
#include <string.h>

struct Structure
{
    int num;
    char str[100];
};

union Union
{
    int num;
    char str[100];
};

int main(){
    struct Structure s={20,"String"};
    union Union u={20,"String"};
    //union can be initialized with one value at a time
    printf("Structure:\n");
    printf("Name:%s\nRollNo:%d\n",s.str,s.num);
    printf("Union:\n");
    printf("Name:%s\nRollNo:%d\n",u.str,u.num);
    return 0;
}
