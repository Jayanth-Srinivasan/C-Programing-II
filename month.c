#include <stdio.h>

int main() {
    int a;
    char* month[12]={"Jan","Feb","Mar","Apr","May","jun","Jul","Aug","Sep","oct","Nov","Dec"};
    printf("Enter the Month:");
    scanf("%d",&a);
    printf("Name of the Month==%s",month[a-1]);
    return 0;
}