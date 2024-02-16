//11. Wysy³ka_Warzyw--wylicza wszystkie op³aty za zakup warzyw

#include <stdio.h>
#include <ctype.h>

#define ARBUZ 1.25			//cena arbuza za kg
#define BURAKI 0.65			//cena buraków za kg
#define CEBULA 0.89			//cena cebuli za kg
#define MIN	100				//zamowienia powyzej tej kwoty premiowane sa rabatem
#define RABAT 0.15			//rabat naliczany przed dodaniem kosztow przesylki
#define WAGA1 5				//pierwsza granica wagi przesy³ki
#define WAGA2 20			//druga granica wagi przesy³ki
#define PRZESYLKA1 3.50		//koszt przesy³ki nieprzekraczajacej wagi 5 kg
#define PRZESYLKA2 10.0		//koszt przey³ki o wadze wiêkszej ni¿ 5 kg ale mniejszej ni¿ 20 kg
#define PRZESYLKA3 8.0		//koszt przesy³ki o wadze wynosz¹cej 20 kg
#define PRZESYLKA4 0.1		//koszt przesy³ki za ka¿dy kg powy¿ej 20 kg

int main(void)
{
	char ch;
	float arbuzy, buraki,cebule;
	float ilosc_a=0.0;
	float ilosc_b=0.0;
	float ilosc_c=0.0;
	
	printf("Podaj litere odpowiadajaca zamawianemu przez Ciebie produktu:\n");
	printf("A) Arbuzy.\n"
		   "B) Buraki.\n"
		   "C) Cebule.\n"
		   "K) KONIEC ZAMOWIENIA.\n");
	
	while((ch=getchar()) != 'K')
	{
		if('\n'==ch)
			continue;
			
		if(isupper(ch))		//tylko wielkie litery
		{
			switch(ch)
			{
				case 'A': printf("Podaj ile kg  arbuzow chcesz zamowic?:\n");
						  scanf("%.2f", &arbuzy);
						  
						  break;
				case 'B': printf("Podaj ile kg burakow chcesz zamowic?:\n");
						  scanf("%.2f", &buraki);
						  ilosc_b=ilosc_b+buraki;
						  break;
				case 'C': printf("Podaj ile kg cebuli chcesz zamowic?:\n");
						  scanf("%.2f", &cebule);
						  ilosc_c=ilosc_c+cebule;
						  break;	
				default : printf("Wybierz jedna z dostepnych opcji.\n");
						  break;
			}

		}
		else
			printf("Rozpoznaje tylko wielkie litery.\n");
		while(isdigit(getchar()))
			ilosc_a=ilosc_a+arbuzy;
		while(getchar() =='\n')
			continue;
		printf("Podaj kolejna litere:\n");
	}
	printf("Zamowiles %.2f kg arbuzow, %.2f kg burakow i %.2f kg cebuli.\n", ilosc_a, ilosc_b, ilosc_c);
	return 0;
}
