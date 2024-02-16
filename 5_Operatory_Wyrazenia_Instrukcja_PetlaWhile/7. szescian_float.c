//7.szescian_float.c -- pobiera liczbe typu float i wyswietla jej szescian

#include <stdio.h>
void szescian(float n); //oblicza szescian pobranej liczby

float main(void)  //pobiera liczbe
{
	float liczba;
	float trzy=3.0;
	
	printf("Podaj dowolna liczbe zmiennoprzecinkowa:\n");
	scanf("%f",&liczba);
	szescian(liczba);
	while(liczba>0 || liczba<0)
	{
		printf("Podaj kolejna dowolna liczbe zmiennoprzecinkowa:(0 to koniec)\n");
	    scanf("%f",&liczba);
	    szescian(liczba);
	}
	printf("Koniec.");
	
	return 0;	
   
}

void szescian(float n)
{
	float dotrzeciej;
	dotrzeciej=n*n*n;
	printf("Podana przez Ciebie liczba %.2f podniesiona do szescianu wynosi: %.2f\n\n",n, dotrzeciej);
	
}
