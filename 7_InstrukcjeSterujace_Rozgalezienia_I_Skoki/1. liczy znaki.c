//1. liczy znaki -- wyswietla info o liczbie odczytanych znakow

#include <stdio.h>
#include <ctype.h>
#define STOP '#'

int main(void)
{
	char c;
	char poprz;
	long ile_liter=0L;
	long ile_cyfr=0;
	long ile_odst=0L;
	int ile_wierszy=0;
	int ile_kropek=0;
	long ile_przecink=0L;
	int ile_cudzysl=0;
	
	printf("Wprowadz tekst do analizy (znak # przerywa prace programu):\n");
	while((c=getchar()) != STOP)
	{
		if (isalpha(c))
			ile_liter++;				//liczy ilosc liter
		else if (isdigit(c))            //liczy ilosc cyfr
			ile_cyfr++;
		else 							//liczy ilosc znakow
			{
				if (c == ' ')
					ile_odst++;
				else if (c == '\n')
					ile_wierszy++;
				else if (c == '.')
					ile_kropek++;
				else if (c == ',')
					ile_przecink++;
				else if (c == '"')
					ile_cudzysl++;
			}
		poprz = c;
	}
	if (poprz != '\n')
		ile_wierszy++;
		
	printf("liter = %ld, cyfr = %d, odstepow = %ld, wierszy = %d, kropek = %d, przecinkow = %ld, cudzyslowow = %d",
			ile_liter, ile_cyfr, ile_odst, ile_wierszy, ile_kropek, ile_przecink, ile_cudzysl);
}
