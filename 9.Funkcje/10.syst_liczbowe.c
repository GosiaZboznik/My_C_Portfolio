//10.syst_liczbowe.c -- wyswietla podana liczbe w wybranym systemie liczbowym

#include <stdio.h>

void sys_liczb(unsigned long n, int a);

int main(void)
{
	unsigned long liczba;
	int system;
	
	printf("Podaj liczbe calkowita, ktora chcesz zamienic  i liczbe calkowita \n");
	printf("odpowiadajaca wybranemu systemowi liczbowemu od 2 do 10.\n");
	while(scanf("%ld %d", &liczba, &system) == 2)
	{
		printf("Odpowiednik systemu liczbowego %d: ",system);
		sys_liczb(liczba, system);
		putchar('\n');
		printf("Podaj liczbe calkowita, ktora chcesz zamienic  i liczbe calkowita \n");
		printf("odpowiadajaca wybranemu systemowi liczbowemu od 2 do 10.\n");
		printf("Wcisnij q aby zakonczyc dzialanie programu.\n");
	}
	printf("Gotowe.\n");
	
	return 0;
}

void sys_liczb(unsigned long n, int a)
{
	int r;
	r = n % a;
	if(n>=a)
		sys_liczb(n/a, a);
	printf("%d",r);
}

