#include <stdio.h>
#include<conio.h>
int main()
{
    int number = 25;
    int *ptr;
    ptr = &number;
    printf("\n Address of the variable before decleration is: %u",ptr);
    ptr=ptr+1;
    printf("\n Address of the variable after decleration is: %u",ptr);
    return 0;
}
