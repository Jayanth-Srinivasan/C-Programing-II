#include <stdio.h> 

int main(){  
   FILE *fp;  
  
   fp = fopen("file.txt","w+");  
   fputs("This is some Sample txt in file", fp);  
   fseek( fp, 11, SEEK_SET );  
   fputs("New Text", fp);  
   fclose(fp);  
   return 0;
}  
