//6.ile pien_suma kwadrat.c -- ile pieniedzy otrzymasz za x dni, je�li zarobisz 1$ za pierwszy dzie�, 4$ za drugi dzie�, 9$ za trzeci itd.

#include <stdio.h>
int main(void)  //oblicza sum� kwadratow pierwszych x liczb ca�kowitych
{
	int licznik, suma, dni;
	
	
	printf("Liczba przepracowanych dni: ");
	scanf("%d",&dni);
	
	while(dni>=0)
	{
	   licznik=0;
	   suma=0;
	   while(licznik++<dni)
	       suma=suma+licznik*licznik;
	   printf("Za przepracowanych %d dni otrzymasz %d$.\n\n", dni, suma);
	   printf("Liczba przepracowanych dni: ( <0 - koniec) ");
	   scanf("%d",&dni);
	}
	
	return 0;   
}
