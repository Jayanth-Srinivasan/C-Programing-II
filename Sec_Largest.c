// Write a C program to find out the second largest among three given numbers
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the nos:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c){
        if(b>=c){printf("2nd Largest:%d",b);}
        else{printf("2nd Largest:%d",c);}
    }
    else if(b>=a&&b>=c){
        if(a>=c){printf("2nd Largest:%d",a);}
        else{printf("2nd Largest:%d",c);}
    }
    else if(a>=b){printf("2nd Largest:%d",a);}
    
    else{printf("2nd Largest:%d",b);}

    // if (a > b && b > c)                                                                             
    // {                                                                                               
    //     printf("2nd Largest:%d",b);                                                                                   
    // }                                                                                                                                                                                  
    // else if (a > c && c > b)                                                                        
    // {                                                                                               
    //     printf("2nd Largest:%d",c);                                                                                   
    // }                                                                                                                                                                    
    // else                                                                                            
    // {                                                                                               
    //     printf("2nd Largest:%d",a);                                                                                  
    // }      
    return 0;
}

