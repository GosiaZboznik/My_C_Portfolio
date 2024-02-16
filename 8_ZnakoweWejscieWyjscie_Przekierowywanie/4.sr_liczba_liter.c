// 4.sr_liczba_liter -- odczytuje dane do napotkania konca pliu i wyswietla srednia liczbe liter w slowie


#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main(void)
{
	char c;						//biezacy znak
	char poprz;					//poprzedni znak
	long ile_liter=0L;
	int ile_slow=0;
	bool w_slowie=false;		//== true, jesli c znajduje sie w slowie
	float srednia;				//srednia liczba liter w slowie
	
	printf("Wprowadz tekst do analizy:\n");
	while((c=getchar()) != EOF)
	{
		if (isalpha(c))			//liczy litery 
			ile_liter++;
		if(!isspace(c) && !w_slowie)
		{
			w_slowie = true;	//zaczelo sie nowe slowo
			ile_slow++;			//liczy slowa	
		}
		if (isspace(c) && w_slowie)
			w_slowie = false;	//znajduje koniec slowa
	}
	
	srednia=(float)ile_liter/(float)ile_slow;
	printf("Srednia liczba liter w slowie wynosi: %.1f\n", srednia);
	
	return 0;
}
