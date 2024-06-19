//3.max_tab.c -- zwraca najwieksza wartosc przechowywana w tablicy
#include<stdio.h>
#define ROZMIAR 10

int maximum(int *poczatek, int *koniec);

int main(void)
{
	int tab[ROZMIAR]={20,10,5,39,4,16,19,26,31,20};
	int max;
	max=maximum(tab, tab+ROZMIAR);
	printf("Najwieksza wartosc przechowywana w tej tablicy to: %d\n", max);
	
	return 0;
}

int maximum(int *poczatek, int *koniec)
{
	int max = 0;
	while( poczatek<koniec )
	{
		if(*poczatek<max)
			poczatek ++;
		else
		{
			max=*poczatek;
			poczatek++;
		}	
	}
	
	return max;
}
