//  Write a C program to find the eligibility of admission for a professional course based
// on the following criteria:
#include <stdio.h>

int main(){
    int phy,chem,meth,tot,meth_phy;
    printf("Enter the Marks scored in Physics, Chemistry And Maths:");
    scanf("%d%d%d",&phy,&chem,&meth);
    tot=phy+chem+meth;
    meth_phy=meth+phy;
    if(meth>=65){
        if(phy>=55){
            if(chem>=50){
                if(tot>=190||meth_phy>=140){
                    printf("Eligible");
                }
                else{
                    printf("Not Eligible");
                }
            }
            else{
                printf("Not Eligible");
            }
        }
        else{
            printf("Not Eligible");
        }
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}