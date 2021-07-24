#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char data[50];
    fp = fopen("test.txt", "w");
    if (fp == NULL)
    {
        printf("ER");
        exit(0);
    }
    printf("\n Enter Data:");
    while (strlen(gets(data)) > 0)
    {
        fputs(data, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    return 0;
}