//5. choinkazliter.c--program pobiera od uzytkownika wielka litere i wyswietla z nich "choinke"
#include<stdio.h>

int main(void)
{
	const int RZEDY=5;
	const int ZNAKI=5;
	
	int rzad, kolumna;
	char ch,litera;
	
	printf("Podaj drukowana Litere:\n");
	scanf("%c\n", &litera);
	
	for(rzad=0;rzad<RZEDY;rzad++)
	{	
		for(ch=(litera+rzad);ch<(litera+ZNAKI);ch++)
			printf("*");
		for(ch=(litera-ZNAKI+1);ch<(litera+ZNAKI);ch++)
			printf("%c", ch);
	
		
	
				
		printf("\n");	
	}
	return 0;
}
