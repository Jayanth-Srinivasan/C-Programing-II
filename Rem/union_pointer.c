#include <stdio.h>

int main()
{   
    union number {
        int a;
        int b;
    };
    union number n = { 10 }; 
    union number* ptr = &n;
    printf("a = %d\n", ptr->a);
    ptr->a = 20;
    printf("a = %d\n", ptr->a);
    ptr->b = 30;
    printf("b = %d\n", ptr->b);
    return 0;
}