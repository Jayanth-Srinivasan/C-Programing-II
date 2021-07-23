//Write a C Program to Swap Strings.
#include<stdio.h>
#include <stdlib.h>

void swap(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
  printf("Now,\nstr1 is %s \nstr2 is %s \n",str1,str2);
}

int main()
{
  char *str1 = "Hello";
  char *str2 = "there";
  printf("str1 is %s\nstr2 is %s\n", str1, str2);
  swap(str1, str2);

  return 0;
}
