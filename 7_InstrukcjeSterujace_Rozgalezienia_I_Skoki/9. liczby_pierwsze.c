//9. liczby_pierwsze.c--pobiera dodatnia liczbe calkowita, po czym wyswietla 
//						liczby pierwsze mniejsze lub rowne tej liczbie

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	unsigned long liczba;		//liczba podana przez uztkownika
	unsigned long num;			//liczby mniejsze od podanej liczby
	unsigned long dziel;		//potencjalne dzielniki
	bool pierwsza;				//flaga
	
	printf("Podaj liczbe naturalna:\n");
	printf("Wpisz q, aby zakonczyc\n");
	
	while(scanf("%d",&liczba)==1)
	{	
		printf("Liczby pierwsze, mniejsze badz rowne tej liczbie to:\n");
		
		for(num=2, pierwsza = true; num<=liczba; num++, pierwsza=true)
		{
			for(dziel=2; (dziel*dziel<=num); dziel++)
			{
				if(num%dziel==0)
					pierwsza = false;
			}
			if (pierwsza)
				printf("%5ld", num);		
		}
		printf("\n\n");
		printf("Podaj kolejna liczbe naturalna (q--konczy prace programu):\n");
	}
	printf("Koniec.");
	
	return 0;
}
