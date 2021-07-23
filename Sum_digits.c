#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the no:");
    scanf("%d", &num);
    while (num > 0)
    {
        sum += num % 10;
        num/= 10;
    }
    printf("Sum is:%d", sum);
    return 0;
}