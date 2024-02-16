//9. temper.c--pobiera wartosc temp w stopniach Fahrenheite i zamienia na stopnie Celsjusza i Kelwina

#include <stdio.h>
void temperatura(double n);  //oblicza wartosc w Celsjuszach i Kelwinach

double main(void)  
{
	double fah;
	int rozmiar;
	
	printf("Podaj wartosc temperatury w stopniach Fahrenheita:");
	
	while(scanf("%lf", &fah)==1)
	{
		temperatura(fah);
		printf("Podaj wartosc temperatury w stopniach Fahrenheita (k--koniec):");
	}
	printf("Koniec.");
	
    return 0;
}

void temperatura(double n)
{
	const float CEL1=5.0/9.0;
	const float CEL2=32.0;
	const float KEL1=273.16;
	double cel,kel;
	
	cel=CEL1*(n-CEL2); //Formula zamieniajaca stopnie Fahrenheita na Celsjusza
	kel=cel+KEL1;         //Formula zamieniajaca stopnie Celsjusza na Kelwina
	printf("%.2lf stopni Fahrenheita = %.2lf stopni Celsjusza = %.2lf stopni Kelwina.\n\n", n, cel, kel);
	
}
