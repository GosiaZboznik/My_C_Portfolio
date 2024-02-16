//1.imienazwisko.c-- pobiera imie i nazwisko i wyswietla je w ukladzie Nazwisko, Imie

#include<stdio.h>

int main(void)
{
	char imie[30];
	char nazwisko[30];
	
	printf("Podaj swoje imie:\n");
	scanf("%s",imie);
	printf("Podaj swoje nazwisko:\n");
	scanf("%s",nazwisko);
	printf("%s, %s", nazwisko,imie);
	
	return 0;
}
