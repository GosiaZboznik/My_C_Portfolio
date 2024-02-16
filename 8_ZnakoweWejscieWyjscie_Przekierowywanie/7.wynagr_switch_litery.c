//8. wynagr_switch.c -- pobiera liczbe przepracowanych godzin w tygodniu i wyswietla
//				        wynagrodzenie brutto, podatek i wynagr netto

#include <stdio.h>
#include<ctype.h>

#define MAXGODZ 40						//max ilosc godzin z podstawowym wynagrodzeniem
#define PODATEK1 0.15					//podatek dla pierwszych 1200 zl
#define PODATEK2 0.20					//podatek dla kolejnych 600 zl
#define PODATEK3 0.25					//podatek powyzej 1800 zl
#define PROG1 1200						//pierwszy prog
#define PROG2 1800						//drugi prog
#define PODSTAWA1 (PODATEK1*PROG1)		//podatek od pierwszych 1200 zl
#define PODSTAWA2 (PODSTAWA1+(PODATEK2*(PROG2-PROG1)))	//podatek za kolejne 600 zl

int pobierz_wybor(void);
int opcje(void);
float wynagrodzenie(int);

int main(void)
{
	int wybor;
	
	while( (wybor = pobierz_wybor() ) != 'q')
	{
		if(wybor>96 && wybor <101)		// sprawdza, czy jest jedna z liter: a, b, c lub d
			wynagrodzenie(wybor);
		else
			printf("Aby program zadzialal, powinienes wybrac jedna z dostepnych opcji.\n");		
	}
	
	printf("Koniec.");

	return 0;
}

int pobierz_wybor(void)
{
	int num;
	
	opcje();	   
	
	while((num=getchar()) != EOF)
		{
			if ( isalpha( num )  )
			{
				while (getchar() != '\n')
					continue;
				
				return num;	
			}
			else
			{
				printf("Musisz wybrac jedna z dostepnych opcji.\n");
				opcje();
			}		
			
			while (getchar() != '\n')
					continue;
		}
	
	return EOF;
}

int opcje(void)
{
	printf("Podaj litere odpowiadajaca zadanej stawce wynagrodzenia lub opcji:\n");
	printf("a) 35 zl/godz.\n"
		   "b) 37 zl/godz.\n"
		   "c) 40 zl/godz.\n"
		   "d) 45 zl/godz.\n"
		   "q) wyjscie\n");
	
		   
	return 0;	
}

float wynagrodzenie(opcja)
{
	int godz;
	float brutto, netto, podatek, zlotygodz, zlotynadgodz, brutto1;
	
	switch(opcja)
		{
			case 'a': zlotygodz=35.0;
			   		break;
			case 'b': zlotygodz=37.0;
			   		break;
			case 'c': zlotygodz=40.0;
			   		break;
			case 'd': zlotygodz=45.0;
			   		break;
			deafault: break;
		}	
		
	printf("Ile przepracowales godzin w tym tygodniu?:\n");
	scanf("%d", &godz);
	while (getchar() != '\n')
			continue;
			
	brutto1=zlotygodz*MAXGODZ;							//wynagrodzenie za pierwsze 40 godzin
	zlotynadgodz=1.5*zlotygodz;							//cena za 1 nadgodzine
			
	if(godz<=MAXGODZ)									//oblicza wynagrodzenie ponizej 40 godzin
		brutto=godz*zlotygodz;
	else
		brutto=brutto1+(godz-MAXGODZ)*zlotynadgodz;		//oblicza wynagrodzenie powyzej 40 godzin
			
	if(brutto<=PROG1)									//podatek do 1200 zl
		podatek=PODATEK1*brutto;
	else if(brutto<=PROG2)								//podatek pomiedzy 1200 zl a 1800 zl
		podatek=PODSTAWA1+(PODATEK2*(brutto-PROG1));
	else 												//podatek powyzej 1800 zl
		podatek=PODSTAWA2+(PODATEK3*(brutto-PROG2));
				
	netto=brutto-podatek;
					
	printf("Twoje wynagrodzenie brutto wynosi %.2f zl. Z tego odliczany jest podatek o wysokosci %.2f zl. \n", brutto, podatek);
	printf("Zatem twoje wynagrodzenie netto wynosi %.2f zl.\n\n", netto);
				
	
	return 0;
}
