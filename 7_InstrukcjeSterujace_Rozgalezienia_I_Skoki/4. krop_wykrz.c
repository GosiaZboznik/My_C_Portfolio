//4. krop_wykrz-- odczytuje dane wejsciowe i zamienia kazda kropke wykrzyknikiem
//                ka¿dy wykrzyknik dwoma wykrzyknikami i wyswietla liczbe zmian

#include <stdio.h>
#define STOP '#'

int main(void)
{
	char ch;
	int licznik=0;
		
	printf("Wpisz zdanie a ja uczynie je bardziej krzyczacym (znak # przerywa prace programu):\n");
	while((ch=getchar()) != STOP)
	{
		if(ch=='.')                       
			{
				putchar('!');
				licznik++;	
			}
		else if (ch=='!')
			{
				putchar(ch);
				printf("!");
				licznik++;	
			}
		else
			putchar(ch);
	}
	
	printf("Liczba zamian jaka wykonal program wynosi: %d\n", licznik);
	return 0;
}
