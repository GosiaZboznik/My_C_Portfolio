//ile pien otrzym.c -- ile pieniedzy otrzymasz za x dni, je�li zarobisz 1$ za pierwszy dzie�, 2$ za drugi dzie� itd.

#include <stdio.h>
int main(void)  //oblicza sum� pierwszych 20 liczb ca�kowitych
{
	int licznik, suma, dni;
	
	
	printf("Liczba przepracowanych dni: ");
	scanf("%d",&dni);
	
	while(dni>=0)
	{
	   licznik=0;
	   suma=0;
	   while(licznik++<dni)
	       suma=suma+licznik;
	   printf("Za przepracowanych %d dni otrzymasz %d$.\n\n", dni, suma);
	   printf("Liczba przepracowanych dni: ( <0 - koniec) ");
	   scanf("%d",&dni);
	}
	
	return 0;   
}
