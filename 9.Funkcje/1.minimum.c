//1.minimum.c--zwraca mniejsza z dwoch wartosci typu double

#include <stdio.h>

double minimum(double a, double b);

int main(void)
{
	double x,y;
	
	printf("Podaj 2 liczby do analizy:\n");
	scanf("%lf", &x);
	scanf("%lf", &y);
	printf("Mniejsza z podanych liczb to: %.2lf", minimum(x,y) );
	
	return 0;
}


double minimum(double a, double b)
{
	return ( (a<b) ? a:b ); 
}
