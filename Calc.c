// Write a C program to implement Calculator for arithmetic operation using functions
#include <stdio.h>
#include <stdlib.h>


float add(){
    float a,b;
    printf("Enter the nos:");
    scanf("%f%f",&a,&b);
    return a+b;
}

float sub(){
    float a,b;
    printf("Enter the nos:");
    scanf("%f%f",&a,&b);
    return a-b;
}

float mul(){
    float a,b;
    printf("Enter the nos:");
    scanf("%f%f",&a,&b);
    return a*b;
}

float divi(){
    float a,b;
    printf("Enter the nos:");
    scanf("%f%f",&a,&b);
    return a/b;
}

int main()
{
    while (1)
    {
        int ch;
        printf("Press 1. Addition:\n");
        printf("Press 2. Subraction:\n");
        printf("Press 3. Multiplication:\n");
        printf("Press 4. Division:\n");
        printf("Press 5. Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Addition:%.2f\n", add());
            break;
        case 2:
            printf("Subraction:%.2f\n", sub());
            break;
        case 3:
            printf("Multiplication :%.2f\n", mul());
            break;
        case 4:
            printf("Division:%.2f\n", divi());
            break;
        case 5:
            exit(0);
        }
    }

    return 0;
}