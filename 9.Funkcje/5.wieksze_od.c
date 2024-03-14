//5.wieksze_od -- zastepuje wartosc obu zmiennych typu double wieksza z nich

#include <stdio.h>

double wieksze_od(double a,double b);

int main(void)
{
	double a,b;
	
	printf("Podaj dwie liczby:\n");
	while ( scanf("%lf %lf", &a, &b) != 2 )
		{
			printf("Nie wszystkie podane znaki sa LICZBAMI.\n");
			printf("Sprobuj jeszcze raz. Podaj dwie liczby:\n");
			while( getchar() != '\n')
				continue;
		}
	printf("Poczatkowo x = %.2lf, a y = %.2lf\n", a,b);
	wieksze_od(a,b);


	
	return 0;
}


double wieksze_od(double a, double b)
{
	if(a>b)
		b=a;
	else
		a=b;
	printf("Teraz x = %.2lf, a y = %.2lf", a,b);
	
}


