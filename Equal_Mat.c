#include<stdio.h>
 
int main()
{
 	int i,j,r,c, a[10][10], b[10][10], count;
 	printf("\nEnter Number of rows and c :  ");
 	scanf("%d %d",&i,&j);
 	printf("\nEnter the Elements\n");
 	for(r = 0; r < i; r++){
   		for(c = 0;c < j;c++)
    	{
      		scanf("%d", &a[r][c]);
    	}
  	}
 	printf("\nEnter the Second Matrix Elements\n");
 	for(r = 0; r < i; r++){
   		for(c = 0;c < j;c++)
    	{
      		scanf("%d", &b[r][c]);
    	}
  	}
  	count = 1;
 	for(r = 0; r < i; r++){
   		for(c = 0;c < j;c++)
    	{
      		if(a[r][c] != b[r][c]){
			  	count = 0;
			  	break;
			}    
   	 	}
  	}
 	if(count == 1){
 		printf("\n Matrix a is Equal to Matrix b");		
	}
	else{
		printf("\n Matrix a is Not Equal to Matrix b");
	}	
 	return 0;
}