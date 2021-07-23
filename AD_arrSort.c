#include <stdio.h>


int main()
{
    int i,j,n,a[100],temp,p,q,check;
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    printf("Enter the elements : \n");  
    for(i=0;i<n;i++){
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++) { if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order: \n");  
    for(i=0;i<n;i++){
        printf("%d ",a[i]) ;
    }
    for(p=0;p<n;p++) {
        for(q=p+1;q<n;q++)
        {
            if(a[p]<a[q]){
                check=a[p];
                a[p]=a[q];
                a[q]=check;
            }
        }
    }
    printf("\n Descending order: \n");  
    for(p=0;p<n;p++){
        printf("%d ",a[p]) ;
    }
    return 0;
}