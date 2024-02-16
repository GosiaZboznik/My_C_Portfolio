//6. liczba liter imie nazwisko.c --pobiera imie i nazwisko i liczy liczbe liter

#include<stdio.h>
#include<string.h>

int main(void)
{
	char imie[30], nazwisko[30];
	int liczbim, liczbnazw;
	
    printf("Podaj swoje imie i nazwisko:\n");
    scanf("%s %s",imie, nazwisko);
    liczbim=strlen(imie);
    liczbnazw=strlen(nazwisko);
    printf("%*d %*d \n", liczbim, liczbim, liczbnazw, liczbnazw);
    printf("%s %s\n", imie, nazwisko);
	printf("%-*d %-*d ", liczbim, liczbim, liczbnazw, liczbnazw);
	
	return 0;
}
