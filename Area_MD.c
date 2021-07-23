// Write a program in C which is a Menu-Driven Program to compute the area of the various
// geometrical shape.
#include <stdio.h>

float areasq()
{
    int side;
    float area;
    printf("Enter the side:");
    scanf("%d", &side);
    area = side * side;
    return area;
}
float arearec()
{
    int l, b;
    float area;
    printf("Enter the length & width:");
    scanf("%d%d", &l, &b);
    area = l * b;
    return area;
}
float areacl()
{
    int rad;
    float area;
    printf("Enter the radius:");
    scanf("%d", &rad);
    area = 3.14 * rad * rad;
    return area;
}
float areatri()
{
    int b, h;
    float area;
    printf("Enter the Base & Height:");
    scanf("%d%d", &b, &h);
    area = 0.5 * b * h;
    return area;
}
int main()
{
    while (1)
    {
        int ch;
        printf("Press 1. Area of Square:\n");
        printf("Press 2. Area of Rectangle:\n");
        printf("Press 3. Area of Circle:\n");
        printf("Press 4. Area of Triangle:\n");
        printf("Press 5. Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Area of Square :%.2f\n", areasq());
            break;
        case 2:
            printf("Area of Rectangle:%.2f\n", arearec());
            break;
        case 3:
            printf("Area of Circle :%.2f\n", areacl());
            break;
        case 4:
            printf("Area of Triangle:%.2f\n", areatri());
            break;
        case 5:
            exit(0);
        }
    }

    return 0;
}