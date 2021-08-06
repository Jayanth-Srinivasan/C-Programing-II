// Write a C program to merge two array in ascending order
#include <stdio.h>
 
int sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++) { 
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}

int main(){
    int n1,n2,n3,i,j,a[100],b[100],temp1[100],temp2[100];
    printf("Enter the size of array 1 : \n");
    scanf("%d",&n1);
    printf("Enter the elements : \n");  
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]) ;
    }
    temp1[100]=sort(a[100],n1);
    printf("Enter the size of array 2 : \n");
    scanf("%d",&n2);
    printf("Enter the elements : \n");  
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]) ;
    }
    temp2[100]=sort(b[100],n2);
    n3 = n1 + n2;     
    int c[n3];       
  	for(i = 0; i < n1; i++)
  	{
      	c[i] = temp1[i];
  	}
 	for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
  	{
  		c[j] = temp2[i];
  	}
 	printf("\n Array Elements After Merging \n", n3); 
 	for(i = 0; i < n3; i++)
  	{
    	printf(" %d \t ",c[i]);
  	}
  	return 0;
    
    
}