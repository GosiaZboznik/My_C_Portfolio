//6.zamiana -- pobiera adresy trzech wartosci typu double i przepisuje
//			najmniejsza z tych wartosci pod pierwszy adres
//			wartosc srodkowa pod drugi adres 
//			a wartosc najwieksza pod trzeci adres

#include <stdio.h>

void zamiana(double *a,double *b, double *c);

int main(void)
{
	double x,y,z;
	
	printf("Podaj trzy liczby:\n");
	while ( scanf("%lf %lf %lf", &x, &y, &z) != 3 )
		{
			printf("Nie wszystkie podane znaki sa LICZBAMI.\n");
			printf("Sprobuj jeszcze raz. Podaj trzy liczby:\n");
			while( getchar() != '\n')
				continue;
		}
	
	printf("Poczatkowo  x=%.2lf, y=%.2lf, z=%.2lf\n", x, y, z);
	zamiana(&x, &y, &z);
	printf("A teraz     x=%.2lf, y=%.2lf, z=%.2lf", x, y, z);
	
	return 0;
}


void zamiana(double *a, double *b, double *c)
{
	double max,min,sr;
	
	max=(*a>*b)? *a:*b;
	max=(max>*c) ? max:*c;
	
	min=(*a<*b)? *a:*b;
	min=(min<*c) ? min:*c;
	
	if( ( *a!=max) && ( *a!=min) )
		sr=*a;
	else if( ( *b!=max) && ( *b!=min) )
		sr=*b;
	else
		sr=*c;
	
	*a=min;
	*b=sr;
	*c=max;	
}


