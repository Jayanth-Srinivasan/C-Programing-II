#include <stdio.h>
#include <string.h>


int main()
{
    char str1[] = "Hello ";
    char str2[] = "World!";
    strcat(str1,str2);
    printf("Result: %s\n", str1);
    return 0;
}