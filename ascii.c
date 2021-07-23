#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character to find its ASCII value: ");
    scanf("%c", &c);  
    int asciiValue = c;
    printf("ASCII value of %c = %d\n", c, asciiValue);
    int n;
    printf("Enter a number in the range 0 to 127: ");
    scanf("%d", &n);  
    char a = n;
    printf("Character corresponding to ASCII value %d = %c\n", n, a);
    return 0;
}
