//5. krop_wykrz_switch -- odczytuje dane wejsciowe i zamienia kazda kropke wykrzyknikiem,
//                        ka¿dy wykrzyknik dwoma wykrzyknikami i wyswietla liczbe zmian

#include <stdio.h>
#define STOP '#'

int main(void)
{
	char ch;
	int licznik=0;
		
	printf("Wpisz zdanie a ja uczynie je bardziej krzykliwym (znak # przerywa prace programu):\n");
	while((ch=getchar()) != STOP)
	{
		switch (ch)
		{
			case '.' : putchar('!');
					   licznik++;
					   break;
		
			case '!' : putchar(ch);
					   printf("!");
				       licznik++;
				       break;
			default  :
					   putchar(ch);
					   break;
		}
	}
	
	printf("Liczba zamian jaka wykonal program wynosi: %d\n", licznik);
	return 0;
}
