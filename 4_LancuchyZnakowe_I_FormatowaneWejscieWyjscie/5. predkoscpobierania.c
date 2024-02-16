//5. predkoscpobierania-- pobiera predkosc pobierania oraz rozmair i oblicza czas pobierania pliku

#include<stdio.h>

int main(void)
{
  float predkosc, rozmiar, czas;
  
  printf("Z jaka predkoscia pobiera sie Twoj pliK? Wartosc podaj w megabitach na sekunde.\n");
  scanf("%f", &predkosc);
  printf("Jaki jest rozmiar tego pliku w megabajtach?\n");
  scanf("%f", &rozmiar);
  czas=(rozmiar*8)/predkosc;                //zamienia megabajty na megabity i liczy czas
  printf("Przy %.2f megabitow na sekunde plik o rozmiarze %.2f megabajta "
          "zostanie pobrany w %.2f sekundy.", predkosc, rozmiar, czas);
  
	
	return 0;
}
