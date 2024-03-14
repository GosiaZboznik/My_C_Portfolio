//7.spr_litery -- odczytuje znaki, sprawdza czy sa litera i wyswietla numer litery w alfabecie

#include <stdio.h>

int num_w_alfab( char ch);

int main(void)
{
	char c;
	int num;
	long licznik=0;
	
	printf("Podaj tekst do analizy (zasymuluj EOF aby zakonczyc):\n");
	
	while( ( c=getchar() ) != EOF)
	{	
		if( c == '\n')
			{
				printf("\\n -1 ", c);
				printf ("\n");
				licznik=0;
			}
		else if( c == ' ')
			printf("' '-1    ");
		else
		{
			printf("%c", c);
			num = num_w_alfab( c);
			printf("%c  ", num);
		}
			
		licznik++;
		if ( (licznik%10) == 0)
			printf ("\n");	
	}
	
	return 0;
}

int num_w_alfab( char ch)
{
	if( isalpha(ch) )
		{
			if( (ch>='A') && (ch<='Z') )
				ch-=64;			//kod ASCII litery A jest równy 65
			else
				ch-=96;			//kod ASCII litery a jest równy 97
		}
	else
		ch = -1;	
		
		
	return ch;	
}


