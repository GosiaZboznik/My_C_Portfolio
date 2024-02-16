//5.zgaduj.c -- program zgadujacy liczby

#include<stdio.h>

int main(void)
{
	int proba = 1;
	int liczba = 100;
	char ch,odpowiedz;
	
	printf("WYbierz liczbe od 1 do 100. Sprobuje ja odgadnac.\n");
	printf("Wpisz t, jesli moja proba jest udana lub\n");
	printf("n jesli jesli nie trafilem.\n");
	
	liczba/=2;
	printf("Czy Twoja liczba jest wieksza, mniejsza czy rowna %d? \n", liczba);
	while ( (ch=getchar()) != 'r')		//pobranie odpowiedzi, porownanie z r
	{
		if(ch == 'w')
			liczba += liczba/2;
		else if (ch == 'm')
			liczba -= liczba/2;
		else
			printf("Przykro mi, rozumiem tylko: w, m lub r.\n");
		while(getchar() != '\n')
				continue;				//pomija reszte wiersza wejsciowego	
		printf("Czy Twoja liczba jest wieksza, mniejsza czy rowna %d? \n", liczba);	
	}
	
	printf("Hmm... czy Twoja liczba jest %d?\n", liczba);
	while(getchar() == 'r')
				continue;
				
	while ( (odpowiedz=getchar() ) != 't')			//pobranie odpowiedzi, porownanie z t
		{
			if(odpowiedz == 'n')
			{
				printf("Skoro Twoja liczba jest rowna podanej przeze mnie liczbie, to musi byc ta liczba.\n");
				printf("Czy zgodzisz sie ze mna?\n");
			}	
			else
				printf("Przykro mi, rozumiem tylko t lub n.\n");
			while(getchar() != '\n')
				continue;				//pomija reszte wiersza wejsciowego
		}	
	printf("Wiedzialem, ze mi sie uda!\n");
	
	return 0;
}
