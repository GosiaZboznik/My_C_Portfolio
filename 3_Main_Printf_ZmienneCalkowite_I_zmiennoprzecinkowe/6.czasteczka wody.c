//czasteczka wody.c--pobiera objetosc wody w litrach iw yswietla liczbe czasteczek wody w tej objetosci

#include <stdio.h>

int main(void)
{
	float litry, wodag, wynik;
	float masacz=3.0e-23; //masa jednej czasteczki wody to okolo 3.0e-23 g
	
	printf("Podaj objetosc wody w litrach :\n");
	scanf("%f", &litry);
	
    wodag=litry*1000;  //zamienia litry na gramy--1l=1000g
    wynik=wodag/masacz;
    
	printf("Liczba czasteczek wody w tej objetosci to: %e", wynik);
	
	return 0;
}

	
