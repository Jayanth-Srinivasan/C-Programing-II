#include <stdio.h>
 
int main()
{
	int arr[100], i, j, k, size;
	printf("Enter Number of elements:");
	scanf("%d", &size);
	printf("\nEnter elements of Array \n");
	for (i = 0; i < size; i++){
    	scanf("%d", &arr[i]);
   	}     
	for (i = 0; i < size; i++){
		for(j = i + 1; j < size; j++){
    		if(arr[i] == arr[j]){
    			for(k = j; k < size; k++){
    				arr[k] = arr[k + 1];
				}
				size--;
				j--;
			}
		}
	}
 	printf("\n Array:\n");
 	for (i = 0; i < size; i++){
 		printf("%d\t", arr[i]);
  	}	     
 	return 0;
}