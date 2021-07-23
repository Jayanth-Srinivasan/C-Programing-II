// Write a C program for reading a from a file containing a list of names and write the text to
// another file.
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f1,*f2;
    char str;
    f1=fopen("Samp.txt","r");
    if(f1==NULL){
        printf("ERRROR!");
        exit(1);
    }
    f2=fopen("SampCopied.txt","w");
    if (f2==NULL){
        printf("ERROR");
        exit(1);
    }
    str=fgetc(f1);
    while (str!=EOF){
        fputc(str,f2);
        str=fgetc(f1);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}