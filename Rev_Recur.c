//  Write a C program to Reverse a sentence using Recursion
#include <stdio.h>

void rev();
int main()
{
    printf("Enter a Sentence to reverse: ");
    rev();
    return 0;
}

void rev()
{
    char sen;
    scanf("%c", &sen);
    if (sen != '\n')
    {
        rev();
        printf("%c", sen);
    }
}
