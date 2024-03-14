//9.potega_rekurencja.c -- podnosi liczby do potegi z wykorzystaniem rekurencji

#include <stdio.h>

double potega(double a, int b);
double pot_dodatnia(double a, int n);

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
	{
		if(b <= 0)	// 0 do potêgi 0 lub potêgi ujemnej nie jest dobrze zdefiniowane
		{
			printf("Funkcja nie zadzia³a. Program uzyje wartosc rowna 1.\n");
		
			return 1;	
		}
		
		return 0;	//0 do potêgi dodatniej jest zawsze 0.	
	}

	if(b == 0)		//Obs³uga przypadku wyk³adnika 0 - zwraca 1 dla ka¿dej liczby ró¿nej od 0.
	{
		return 1;
	}		
	
	else if(b<0)	// Obs³uga potêgi ujemnej
		return 1/pot_dodatnia(a,-b);
			
	else if(b>0)
		return pot_dodatnia(a,b);
}

double pot_dodatnia(double a,int n)
{
	double pot;
	
	if(n>1)
		pot= a * pot_dodatnia(a,n-1);
	else
		pot=a;

	return pot;
	
}


