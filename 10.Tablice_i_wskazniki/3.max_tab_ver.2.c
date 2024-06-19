//3.max_tab_ver2.c -- zwraca najwieksza wartosc przechowywana w  dowolnej, jednowymiarowej tablicy
#include <stdio.h>
#include <stdlib.h>

int maximum(int *poczatek, int *koniec);

int main(void)
{
	int size,i;
	
	printf("Podaj rozmiar tablicy: ");
    scanf("%d", &size);
	
	//dynamicznie alokujemy pamiec na tablice
	int *array=malloc(size * sizeof(int));
	if (array == NULL) 
	{
        printf("B³¹d alokacji pamiêci!\n");
        return 1;
    }
	
	// Wprowadzanie elementów do tablicy
    printf("Podaj %d liczb calkowitych:\n", size);
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &array[i]);
    }
	
	int max;
	max=maximum(array, array+size);
	printf("Najwieksza wartosc przechowywana w tej tablicy to: %d\n", max);
	
	// Zwolnienie zaalokowanej pamiêci
    free(array);
	
	return 0;
}

int maximum(int *poczatek, int *koniec)
{
	int max = *poczatek;
	while( poczatek<koniec )
	{
		if(*poczatek>max)
			max=*poczatek;
		poczatek++;	
	}
	
	return max;
}
