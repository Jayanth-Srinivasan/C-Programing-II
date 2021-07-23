//Program To copy one string to another using pointers.
#include <stdio.h>
#include <stdlib.h>
void copy(string1,string2){
    char *ptr,string3[10];
    int i;
    ptr = string2;

    while(*ptr!='\0'){string3[i]=*ptr++;
    i++;
    }

    printf("%s,%s",*ptr,string2);
}

int main()
{
    char string1[]="Harsh",string2[]="Tiwari";
    printf("string1,string2 is %s,%s",string1,string2);
    copy(string1,string2);


    return 0;
}
