//10.podatkiUSA.c--pobiera kategorie i dochod i oblicza wysokosc podatku

#include <stdio.h>

#define MAXGODZ 40						//max ilosc godzin z podstawowym wynagrodzeniem

#define PODATEK1 0.15					//procent dla pierwszego progu podatkowego
#define PODATEK2 0.28					//procent dla drugiego progu podatkowego
#define PROG1 17850.0						//prog dla stanu wolnego
#define PROG2 23900.0						//prog dla glowy rodziny
#define PROG3 29750.0						//prog dla malzenstwa-rozliczenie wspolne
#define PROG4 14875.0						//prog dla malzenstwa-rozliczenie osobne
#define PODSTAWA1 (PODATEK1*PROG1)		//podatek do pierwszego progu podatkowego dla stanu wolnego
#define PODSTAWA2 (PODATEK1*PROG2)		//podatek do pierwszego progu podatkowego dla glowy rodziny
#define PODSTAWA3 (PODATEK1*PROG3)		//podatek do pierwszego progu podatkowego dla malzenstwa-rozliczenie wspolne
#define PODSTAWA4 (PODATEK1*PROG4)		//podatek do pierwszego progu podatkowego dla malzenstwa-rozliczenie osobne

int main(void)
{
	int num;
	float dochod,podatek;
	
	printf("Jaki dochod osiagnales w tym roku:\n");
	
	while(scanf("%f", &dochod)==1)
	{
		printf("Podaj liczbe odpowiadajaca twojej kategorii:\n");
		printf("1) Stan wolny.\n"
			   "2) Glowa rodziny.\n"
			   "3) Malzenstwo, rozliczenie wspolne.\n"
			   "4) Malzenstwo, rozliczanie osobne.\n");
		
		if(	(scanf("%d", &num)==1) && num<5)
		{
			switch(num)
			{
				case 1:	if(dochod<=PROG1)
							podatek=dochod*PODATEK1;
						else
							podatek=PODSTAWA1+(dochod-PROG1)*PODATEK2;	
				   		break;
				case 2: if(dochod<=PROG2)
							podatek=dochod*PODATEK1;
						else
							podatek=PODSTAWA2+(dochod-PROG2)*PODATEK2;	
				   		break;
				case 3: if(dochod<=PROG3)
							podatek=dochod*PODATEK1;
						else
							podatek=PODSTAWA3+(dochod-PROG3)*PODATEK2;	
				   		break;
				case 4: if(dochod<=PROG4)
							podatek=dochod*PODATEK1;
						else
							podatek=PODSTAWA4+(dochod-PROG4)*PODATEK2;	
				   		break;
				default: break;

			}
			printf("Twoj podatek do zaplacenia wynosi: %.2f$\n\n", podatek);
		}
		else
			printf("Aby program zadzialal powinienes wybrac jedna z dostepnych opcji.\n");
			
		printf("Jaki dochod osiagnales w tym roku:(q--koniec)\n");	
			
	}
	printf("Koniec.");
	return 0;
}
