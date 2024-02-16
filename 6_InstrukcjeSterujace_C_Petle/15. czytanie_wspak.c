 //15.czytanie_wspak.c--pobiera wiersz znakow i wyswietla je wspak
 
#include<stdio.h>
#include<string.h>
#define ROZMIAR 255
int main(void)
{
	unsigned char linia[ROZMIAR];
	int index;
	
	printf("Napisz cos w jednej linii o maksymalnej dlugosci znakow rownej %d:\n", ROZMIAR);
	
	index=0;
	scanf("%c", &linia[index]);
	while (linia[index] != '\n')
		{
		index++;
		scanf("%c", &linia[index]);		
		}
		
	printf("Odczytane znaki od tylu to:");	
		
	for(index=strlen(linia);index>=0;index--)		
		printf("%c",linia[index-1]);
		
	return 0;
		
}
