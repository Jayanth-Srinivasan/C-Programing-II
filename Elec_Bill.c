// Write a program in C to calculate and print the Electricity bill of a given customer. The
// customer id., name and unit consumed by the user should be taken from the keyboard and
// display the total amount to pay to the customer. The charge are as follow 
#include <stdio.h>

int main(){
    int custid,units;
    float price,tot_amt,rate;
    char custn[100];
    printf("Enter the Details:\n");
    printf("Enter Name and ID:");
    scanf("%s %d",custn,&custid);
    printf("Enter units Consumed:");
    scanf("%d",&units);
    if(units<200){price=1.20;}
    else if(units>=200 && units<400){price=1.50;}
    else if(units>=400 && units<600){price=1.80;}
    else{price=2.00;}
    rate=units*price;
    if(rate>400){
        tot_amt=rate+(rate*0.15);
    }
    else{
        tot_amt=rate;
    }
    if(tot_amt<100){
        tot_amt=100;
    }
    printf("ELECTRICITY BILL DETAILS:\n");
    printf("NAME:%s\nCUSTID:%d\nUNITS CONSUMED:%d\nTOTAL AMOUNT:%.2f",custn,custid,units,tot_amt);
}