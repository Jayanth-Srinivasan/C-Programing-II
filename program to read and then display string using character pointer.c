// Program to read string from keyboard and display it using character pointer.
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    scanf("%[^\n]s",str);


    ptr=str;

    printf("Entered string is: ");
    while(*ptr!='\0')
        printf("%c",*ptr++);

    return 0;
}

