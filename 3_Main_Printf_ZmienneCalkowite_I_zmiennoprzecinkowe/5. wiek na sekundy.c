//wiek na sekundy.c--pobiera  wiek w latach a nastepnie przelicza go na sekundy

#include <stdio.h>

int main(void)
{
	int wiek;
	float s=3.156e7;
	float wynik;
	
	printf("Podaj swoj wiek w latach:\n");
	scanf("%d", &wiek);
    wynik=wiek*s;
	printf("Twoj wiek w sekundach to: %.2f sekund", wynik);
	
	return 0;
}

	
