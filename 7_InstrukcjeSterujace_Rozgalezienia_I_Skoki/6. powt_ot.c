//6. powt_ot.c -- wyswietla informacje o ilczbie powtorzen 'ot' w zdaniu

#include <stdio.h>
#define STOP '#'

int main(void)
{
	char ch;
	char poprz='s';
	int licznik=0;
		
	printf("Wpisz zdanie do analizy (znak # przerywa prace programu):\n");
	while((ch=getchar()) != STOP)
	{
		if(ch=='t' && poprz=='o')
			licznik++;
		poprz=ch;
	}
	printf("Liczba powtorzen ciagu 'ot' wynosi %d:\n", licznik);
	
	return 0;
}
