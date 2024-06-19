//4.max_index.c -- zwraca indeks najwiekszej wartosci w dowolnej, jednowymiarowej tablicy
#include <stdio.h>
#include <stdlib.h>

int maximum(int array[], int n);

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
	
	int indeks;
	indeks=maximum(array, size);
	printf("Indeks najwiekszej wartosci przechowywanej w tej tablicy to: %d\n", indeks);
	
	// Zwolnienie zaalokowanej pamiêci
    free(array);
	
	return 0;
}

int maximum(int array[], int n)
{
	int i;
	int indeks=0;
	int max = array[0];
	
	for(i=0; i<n; i++)
	{
		if(array[i]>max)
		{
			max=array[i];
			indeks=i;
		}
			
	}
	
	return indeks;
}
