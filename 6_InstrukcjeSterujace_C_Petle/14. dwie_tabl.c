 //14. dwie_tabl.--tworzy dwie 8-elem. tablice wartosci typu double
 //                i umieszcza skumulowane sumy elementow pierwszej tablicy w drugiej

#include<stdio.h>
#define ROZMIAR 8

int main(void)
{
	double tab1[ROZMIAR], tab2[ROZMIAR], num;
	int index;
	
	for(index=0;index<ROZMIAR;index++)					  //pobiera elementy do pierwszej tablicy
		scanf("%lf", &tab1[index]);
		
	for(index=0,tab2[index-1]=0;index<ROZMIAR;index++)   //oblicza skumulowane elementy 
		tab2[index]=tab2[index-1]+tab1[index];
		
	for(index=0;index<ROZMIAR;index++)           //wyswietla elementy pierwszej tablicy
		printf(" %9.2lf ", tab1[index] );
	
	printf("\n");
			
	for(index=0;index<ROZMIAR;index++)			//wyswietla elementy drugiej tablicy
		printf(" %9.2lf ", tab2[index] );
	
	return 0;
		
}
