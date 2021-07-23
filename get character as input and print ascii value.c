//Accept character as an input from the user. Print the corresponding ASCII value as output.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    printf("The ASCII value of entered character is : %d\n",ch);
    return 0;
}
