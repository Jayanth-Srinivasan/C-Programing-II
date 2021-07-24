#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch, file_name[25];
    FILE *fp;
    fp = fopen("stores.txt", "r");
    if (fp == NULL)
    {
        perror("Error\n");
        exit(0);
    }
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
    return 0;
}