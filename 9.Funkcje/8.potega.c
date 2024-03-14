//8.potega.c -- podnosi liczby do potegi

#include <stdio.h>

double potega(double a, int b);

int main(void)
{
	double x, xpot;
	int n;
	
	printf("Podaj liczbe oraz potege calkowita,");
	printf(" do ktorej podniesiona zostanie liczba.\n");
	printf("Zasymuluj EOF aby zakonczyc program.\n");
	while( scanf("%lf%d", &x,&n) == 2 )
	{
		xpot = potega(x,n);
		printf("%.3g do potegi %d to %.5g\n", x, n, xpot);
		printf("Podaj kolejna pare liczb lub EOF aby zakonczyc.\n");
	}
	printf("Zycze milego dnia!\n");
	
	return 0;
}

double potega(double a, int b)
{
	double pot = 1;
	int i;
	
	if(a == 0)
		pot = 0;
			
	if(b == 0)
	{
		if(a == 0)
			printf("Funkcja nie zadzia³a. Program uzyje wartosc rowna 1.\n");
		pot = 1;
	}
		
	else if(b<0)
	{
		a=1/a;
		for(i=b;i<0;i++)
			pot*=a;	
	}	
	else if(b>0)
	{
		for(i=1;i<=b;i++)
			pot*=a;	
	}	
	
		
	return pot;
}


