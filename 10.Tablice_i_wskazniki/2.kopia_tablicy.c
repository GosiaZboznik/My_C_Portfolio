//2.kopia_tablicy.c -- kopiuje zawartosc tablicy do dwoch innych tablic
//						za pomoca tablic i wskaznikow

#include <stdio.h>
#define ROZMIAR 5

void kopiuj_tab(double zrodlo[], double cel1[], int n);
void kopiuj_wsk(double *zrodlo, double *cel2, double *koniec);

int main(void) 
{
    double zrodlo[ROZMIAR] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double cel1[ROZMIAR];
    double cel2[ROZMIAR];
    int i;
    
    printf("Zawartosc pierwszej tablicy:\n");
    for(i=0; i<ROZMIAR; i++)
		printf("%.1f  ", zrodlo[i]);
	printf("\n");
  	
  	printf("Zawartosc drugiej tablicy:\n");
    kopiuj_tab(zrodlo, cel1, ROZMIAR);
	printf("\n");
    
    printf("Zawartosc trzeciej tablicy:\n");
    kopiuj_wsk(zrodlo, cel1, zrodlo+ROZMIAR);
    printf("\n");
    
    return 0;
}

void kopiuj_tab(double zrodlo[], double cel1[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		cel1[i]=zrodlo[i];	
	}
	
    for(i=0; i<n; i++)
		printf("%.1f  ", cel1[i]);
		
		
}

void kopiuj_wsk(double *zrodlo, double *cel2, double *koniec)
{
	while(zrodlo<koniec)
	{
		*cel2= *zrodlo;
		printf("%.1f  ", *cel2);
		cel2++;
		zrodlo++;
	}	
}
