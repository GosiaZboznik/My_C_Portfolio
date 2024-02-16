//11. Wysy�ka_Warzyw--wylicza wszystkie op�aty za zakup warzyw

#include <stdio.h>
#include <ctype.h>

#define ARBUZY 1.25			//cena arbuza za kg
#define BURAKI 0.65			//cena burak�w za kg
#define CEBULE 0.89			//cena cebuli za kg
#define MIN	100				//zamowienia powyzej tej kwoty premiowane sa rabatem
#define RABAT 0.05			//rabat naliczany przed dodaniem kosztow przesylki
#define WAGA1 5				//pierwsza granica wagi przesy�ki
#define WAGA2 20			//druga granica wagi przesy�ki
#define PRZESYLKA1 3.50		//koszt przesy�ki nieprzekraczajacej wagi 5 kg
#define PRZESYLKA2 10.0		//koszt przey�ki o wadze wi�kszej ni� 5 kg ale mniejszej ni� 20 kg
#define PRZESYLKA3 8.0		//koszt przesy�ki o wadze wynosz�cej 20 kg
#define PRZESYLKA4 0.1		//koszt przesy�ki za ka�dy kg powy�ej 20 kg

float oplaty();				//oblicza ceny produktow	
float dostawa();			//oblicza cene przesylki


int main(void)
{
	char ch;
	int arbuzy, buraki,cebule;
	int ilosc_a=0;
	int ilosc_b=0;
	int ilosc_c=0;
	int ilosc;
	float koszt_dostawy, koszt_paczki, oplata_calkowita;

	
	printf("Podaj litere odpowiadajaca zamawianemu przez Ciebie produktowi:\n");
	printf("A) Arbuzy.\n"
		   "B) Buraki.\n"
		   "C) Cebule.\n"
		   "K) KONIEC ZAMOWIENIA.\n");
	
	while( (ch=getchar()) != 'K')
	{
		if('\n' == ch)
			continue;
		if(isupper(ch))	
			switch(ch)
			{
				case 'A': printf("Podaj ile kg  arbuzow chcesz zamowic?:\n");
						  scanf("%d", &arbuzy);
						  ilosc_a=ilosc_a+arbuzy;
						  break;
				case 'B': printf("Podaj ile kg burakow chcesz zamowic?:\n");
						  scanf("%d", &buraki);
						  ilosc_b=ilosc_b+buraki;
						  break;
				case 'C': printf("Podaj ile kg cebuli chcesz zamowic?:\n");
						  scanf("%d", &cebule);
						  ilosc_c=ilosc_c+cebule;
						  break;	
				default : printf("Wybierz jedna z dostepnych opcji.\n");
						  break;
			}
		else
			printf("Rozpoznaje tylko wielkie litery.\n");
		printf("Podaj kolejna litere lub K aby podsumowac zamowienie:\n");
	}
	
	ilosc=ilosc_a+ilosc_b+ilosc_c;
	printf("Zamowiles:\n");
	printf("  %d kg arbuzow po %.2f zl/kg\n",ilosc_a,ARBUZY);
	printf("  %d kg burakow po %.2f zl/kg\n",ilosc_b, BURAKI);
	printf("  %d kg cebuli po %.2f zl/kg\n", ilosc_c, CEBULE);
	
	
	koszt_paczki=oplaty(ilosc_a,ilosc_b, ilosc_c);
	koszt_dostawy=dostawa(ilosc);
	oplata_calkowita=koszt_paczki+koszt_dostawy;
	
	printf("Calkowity koszt twojego zamowienia wynosi: %.2f zl.\n", oplata_calkowita);
	
	return 0;
}

float oplaty(a,b,c)
{
	float cena_a,cena_b,cena_c, cena, rabat;
	
	cena_a=a*ARBUZY;			//oblicza cene za podana ilosc arbuzow
	cena_b=b*BURAKI;			//oblicza cene za podana ilosc burakow
	cena_c=c*CEBULE;			//oblicza cene za podana ilosc cebuli
	
	printf("Ceny za zamowione przez ciebie produkty wynosza:\n");
	printf("  %.2f zl za arbuzy\n", cena_a);
	printf("  %.2f zl za buraki\n", cena_b);
	printf("  %.2f zl za cebule.\n", cena_c);
	cena=cena_a+cena_b+cena_c;
	
	if(cena>MIN)
		{
		
			printf("Laczna kwota wynosi: %.2f zl\n", cena);
			rabat=cena*RABAT;
			cena=cena-rabat;
			printf("Zostal naliczony rabat w wysokosci %.2f zl.\n", rabat);
			printf("Zatem kwota po rabacie wynosi: %.2f zl\n\n", cena);
		}
	
	else
		{
			printf("Laczna kwota wynosi: %.2f zl\n", cena);
			printf("Nie zostal naliczony zaden rabat ");
			printf("(5%% rabatu naliczane jest za zakupy powyzej %d zl).\n\n",MIN );
		}	
		
	return cena;
}

float dostawa(x)
{
	float przesylka;

	if(x<=WAGA1 && x>0.0)
		{
			przesylka=PRZESYLKA1;
			printf("Twoje zamowienie nie przekracza wagi %d kg (Twoje zamowienie wazy %d kg).\n", WAGA1,x);
		}
	else if(x>WAGA1 && x<=WAGA2)
		{
			przesylka=PRZESYLKA2;
			printf("Twoje zamowienie jest powyzej %d kg ale nie przekracza wagi %d kg (Twoje zamowienie wazy %d kg).\n", WAGA1,WAGA2,x);
		}
	else if (x>WAGA2)
		{
			przesylka=PRZESYLKA3+(x-WAGA2)*PRZESYLKA4;
			printf("Twoje zamowienie przekracza wage %d kg (Twoje zamowienie wazy %d kg).\n", WAGA2,x);
		}
	else if (x<=0.0)
		{
			przesylka=0.0;
			printf("Nie zlozyles zadnego zamowienia.\n");
		}	
	
	printf("Zatem oplata za Twoja przesylke wynosi: %.2f zl.\n\n", przesylka);
		
	return przesylka;
	
}

