//4.sr_harm -- pobier dwa argumenty typu double i zwraca srednia harmoniczna

#include <stdio.h>

double sr_harm(double a,double b);

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
	printf("Srednia harmoniczna podanych liczb wynosi: %lf\n", sr_harm(a,b) );
	
	return 0;
}


double sr_harm(double a, double b)
{
	double sr_arytm;
	double sr_harm;
	
	a=1/a;
	b=1/b;
	sr_arytm=(a+b)/2;
	sr_harm=1/sr_arytm;
	
	return sr_harm;
	
}


