#include <stdio.h>
 
int main()
{
    int a[100],i,n,ele;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the ele to search: ");
    scanf("%d", &ele);
    for(i=0; i<n; i++){
        if(a[i]==ele){
			printf("element found ");
            return 0;		 
        }
    }
	printf("element  not  found");
    return 0;
}