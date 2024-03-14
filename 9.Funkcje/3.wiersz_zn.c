//3.wiersz_zn-- pobiera trzy argumenty (znak i dwie liczby calkowite)
//				pierwsza liczba - okresla liczbe wyswietlania znakow w jednym wierszu
//				druga - liczbe wierszy

#include <stdio.h>

void rzad_zn(char ch, int i,int j);

int main(void)
{
	char ch;
	int i, j;
	
	printf("Podaj znak i dwie liczby calkowite:\n");
	while( ( (ch = getchar()) != EOF) )
	{
		int i, j;
		
		while ( scanf("%d %d", &i, &j) != 2 )
		{
			printf("Nie wszystkie podane znaki sa LICZBAMI.\n");
			printf("Sprobuj jeszcze raz. Podaj dwie liczby calkowite:\n");
			while( getchar() != '\n')
				continue;
		}	
			
		rzad_zn(ch, i, j);
		printf("\nPodaj kolejny znak i dwie liczby calkowite:\n");
		printf("Aby zakonczyc, zasymuluj EOF.\n");
		while( getchar() != '\n')
			continue;
	}
	printf("Do widzenia");
	return 0;
}


void rzad_zn(char ch,int i,int j)
{
	int rzad,kol;
	
	for (rzad=1; rzad<=j; rzad++)
	{
		for (kol = 1; kol<=i; kol++)
			putchar(ch);
		putchar('\n');
	}
}


