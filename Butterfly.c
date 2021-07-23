#include <stdio.h>

int main(){
    int r, h=5, d, s;
    for(r = 1; r <= h - 1; r++) {
		printf("\t");
		for(d = 1; d <= r; d++)
			printf(" *");
		for(s = 1; s <= 2 * (h - r); s++)
			printf("  ");
		putchar('\b');
		for(d = r; d >= 1; d--)
			printf(" *");
		putchar('\n');
	}

	for(r = h; r >= 1; r--) {
		printf("\t");
		for(d = 1; d <= r; d++)
			printf(" *");
		for(s = 1; s <= 2 * (h - r); s++)
			printf("  ");
		putchar('\b');
		for(d = r; d >= 1; d--)
			printf(" *");
		putchar('\n');
	}
    return 0;
}