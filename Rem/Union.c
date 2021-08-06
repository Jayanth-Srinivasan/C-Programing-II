#include <stdio.h>

union pack{
char a;
int	b;
double c;
};


int main()
{
	
	union pack p; 

	printf("\nOccupied size by union pack: %d",sizeof(p));

	p.a='A';
	printf("\nValue of a:%c",p.a);

	p.b=10;
	printf("\nValue of b:%d",p.b);
	
	p.c=30;
	printf("\nValue of c:%f",p.c);

	p.a='A';
	p.b=10;
	p.c=12345.6790;

	printf("\nValue of a:%c, b:%d, c:%f",p.a,p.b,p.c);

	return 0;
}