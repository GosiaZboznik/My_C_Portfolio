//7. wynagr.c -- pobiera liczbe przepracowanych godzin w tygodniu i wyswietla
//				wynagrodzenie brutto, podatek i wynagr netto

#include <stdio.h>

#define ZLOTYGODZ 40					//wynagrodzenie za godzine
#define MAXGODZ 40						//max ilosc godzin z podstawowym wynagrodzeniem
#define BRUTTO1 (ZLOTYGODZ*MAXGODZ)		//wynagrodzenie za pierwsze 40 godzin
#define ZLOTYNADGODZ (1.5*ZLOTYGODZ)	//cena za 1 nadgodzine
#define PODATEK1 0.15					//podatek dla pierwszych 1200 zl
#define PODATEK2 0.20					//podatek dla kolejnych 600 zl
#define PODATEK3 0.25					//podatek powyzej 1800 zl
#define PROG1 1200						//pierwszy prog
#define PROG2 1800						//drugi prog
#define PODSTAWA1 (PODATEK1*PROG1)		//podatek od pierwszych 1200 zl
#define PODSTAWA2 (PODSTAWA1+(PODATEK2*(PROG2-PROG1)))	//podatek za kolejne 600 zl

int main(void)
{
	int godz, brutto, netto, podatek;
		
	printf("Ile przepracowales godzin w tym tygodniu?:\n");
	scanf("%d", &godz);
	
	if(godz<=MAXGODZ)									//oblicza wynagrodzenie ponizej 40 godzin
		brutto=godz*ZLOTYGODZ;
	else
		brutto=BRUTTO1+(godz-MAXGODZ)*ZLOTYNADGODZ;		//oblicza wynagrodzenie powyzej 40 godzin
	
	if(brutto<=PROG1)									//podatek do 1200 zl
		podatek=PODATEK1*brutto;
	else if(brutto<=PROG2)								//podatek pomiedzy 1200 zl a 1800 zl
		podatek=PODSTAWA1+(PODATEK2*(brutto-PROG1));
	else 												//podatek powyzej 1800 zl
		podatek=PODSTAWA2+(PODATEK3*(brutto-PROG2));
		
	netto=brutto-podatek;
			
	printf("Twoje wynagrodzenie brutto wynosi %d zl. Z tego odliczany jest podatek o wysokosci %d zl. \n", brutto, podatek);
	printf("Zatem twoje wynagrodzenie netto wynosi %d zl.\n", netto);
	
	return 0;
}
