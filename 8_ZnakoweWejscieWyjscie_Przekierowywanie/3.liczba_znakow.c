// 3.liczba_znakow.c -- wyswietla liczbe malych i wielkich liter oraz liczbe pozostalych znakow


#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char c;
	long ile_M_liter=0L;
	int ile_W_liter=0;
	long ile_znakow=0L;
	
	printf("Wprowadz tekst do analizy:\n");
	while((c=getchar()) != EOF)
	{
		if (islower(c))
			ile_M_liter++;
		else if (isupper(c))
			ile_W_liter++;
		else
			ile_znakow++;
	}
	
	printf("Liczba malych liter: %ld\n", ile_M_liter);
	printf("Liczba wielkich liter: %d\n", ile_W_liter);
	printf("Liczba pozostalych znakow: %d\n", ile_znakow);
	
	return 0;
}
