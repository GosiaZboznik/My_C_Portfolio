// 11.odwr_kolej.c--wczytuje liczby calkowite do tablicy i wyswietla je w odwrotnej kolejnosci
#include<stdio.h>
#define ROZMIAR 8

int main(void)
{
	int index, tablica[ROZMIAR];
	
	for(index=0;index<ROZMIAR;index++)
		scanf("%d", &tablica[index]);
	for(index=ROZMIAR;index>0;index--)
		printf("%d ", tablica[index-1]);
		
	return 0;
}


