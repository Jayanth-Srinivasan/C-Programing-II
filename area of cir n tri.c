#include <stdio.h>

int main() {
 
   int rad,height,base,triarea;
   float PI = 3.14, area, ci;
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);
   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);
   printf("\nEnter height of triangle: ");
   scanf("%d",&height);
   printf("\nEnter base of triangle: ");
   scanf("%d",&base);
   triarea = 0.5 * height * base;
   printf("\nArea of triangle is: %d", triarea);
   return (0);
}