#include<stdio.h>
#include<conio.h>

int len_Str(char*p)
{
    int count = 0;
    while (*p != "\0") {
        count++;
        p++;
    }
    return count;
    }

    int main()
    {
        char str[100];
        int length;
        printf("\nEnter any string : ");
        gets(str);
        length = len_Str(str);
        printf("\nThe length of the given string : %d\n", length);
        return 0;
}

