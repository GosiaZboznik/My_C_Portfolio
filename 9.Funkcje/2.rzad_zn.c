//2.rzad_zn--wyswietla znak ch w kolumnach od i do j

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
		while(i>j)
		{
			printf("Pierwsza podana liczba musi byc mniejsza od drugiej.\n");
			printf("Sprobuj jeszcze raz. Podaj dwie liczby calkowite:\n");
			while ( scanf("%d %d", &i, &j) != 2 )
			{
				printf("Nie wszystkie podane znaki sa LICZBAMI.\n");
				printf("Sprobuj jeszcze raz. Podaj dwie liczby calkowite:\n");
				while( getchar() != '\n')
					continue;
			}	
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
	int kol;
	
	for (kol = 1; kol<i; kol++)
		putchar(' ');
	for (kol = i; kol<=j; kol++)
		putchar(ch);
}


