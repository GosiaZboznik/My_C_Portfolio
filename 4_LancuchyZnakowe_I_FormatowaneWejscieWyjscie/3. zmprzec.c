//3. zmprzec.c--pobiera liczbe zmiennoprzecinkowa i wyswietla ja ja w postaci ulamka dziesietnego i w zapisie wykladniczym

#include<stdio.h>

int main(void)
{
	float liczba;
	
	printf("Podaj liczbe zmiennoprzecinkowa:\n");
	scanf("%f", &liczba);
	printf("a) Wpisano liczbe %.1f lub %.1e.\n", liczba, liczba);
	printf("b) Wpisano liczbe %+.3f lub %.3E.\n", liczba, liczba);
	
	return 0;
}
