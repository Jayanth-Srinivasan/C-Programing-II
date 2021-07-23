#include<stdio.h>
#include<string.h>

int main(){
   int i,j,count;
   char str[25][25],temp[25];
   puts("No of strings: ");
   scanf("%d",&count);

   puts("Enter String: ");
   for(i=0;i<=count;i++)
      gets(str[i]);
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("List of Sorted Strings:");
   for(i=0;i<=count;i++)
      puts(str[i]);
   
   return 0;
}