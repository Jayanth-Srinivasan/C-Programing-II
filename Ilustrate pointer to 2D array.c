#include <stdio.h> 
int main(void) { 
int num[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} }; 
int *ptr = &num[0][0];

int ROWS = 3, COLS = 4, TOTAL_CELLS = ROWS * COLS, i; 
for (i = 0; i < TOTAL_CELLS; i++) { printf("%d ", *(ptr + i)); } 
return 0; }
