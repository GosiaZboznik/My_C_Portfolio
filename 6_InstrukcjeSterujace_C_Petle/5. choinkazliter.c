//5. choinkazliter.c--program pobiera od uzytkownika wielka litere i wyswietla z nich "choinke"
#include<stdio.h>

int main(void)
{
	const int RZEDY=5;
	const int ZNAKI=5;
	
	int rzad, kolumna;
	char ch,litera;
	
	printf("Podaj drukowana Litere:\n");
	scanf("%c", &litera);
	
	for(rzad=0;rzad<RZEDY;rzad++)
	{
		for(kolumna=ZNAKI;kolumna>rzad;kolumna--)                       //wyswietla poczatkowe odstepy
			printf(" ");
		for(kolumna=0, ch=litera-ZNAKI+1;kolumna<=rzad;kolumna++,ch++)   //wyswietla litery w kolejnosci rosnacej
			printf("%c", ch);
		for(kolumna=1,ch=ch-2;kolumna<=rzad;kolumna++, ch--)              //wyswietla litery w kolejnosci malejacej
			printf("%c", ch);
				
		printf("\n");	
	}
	return 0;
}
