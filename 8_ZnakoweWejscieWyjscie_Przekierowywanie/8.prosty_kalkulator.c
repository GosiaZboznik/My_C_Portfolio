// 8. prosty_kalkulator.c -- wyswietla menu z mozliwoscia: dodawania, odejmowania, mno¿enia i dzielenia

#include<stdio.h>
char pobierz_wybor(void);;
char pobierz_pierwszy(void);
float pobierz_float(void);
float dodawanie(void);
float odejmowanie(void);
float mnozenie(void);
float dzielenie(void);

int main(void)
{
	int wybor;
	
	while( (wybor=pobierz_wybor() ) != 'k')
	{
		switch (wybor)
		{
			case 'a' :	dodawanie();
						break;
			case 'b' :	odejmowanie();
						break;
			case 'c' :	mnozenie();
						break;
			case 'd' :	dzielenie();
						break;
			default	 :  printf("Blad programu!\n");
						break;
		}
	while(getchar() != '\n')
		continue;
	}
	printf("Koniec.\n");
}

char pobierz_wybor(void)
{
	int ch;
;
	printf("Wpisz wybrana litere aby wykonac dzialanie lub k aby zakonczyc:\n");
	printf("a. dodawanie   b. odejmowanie\n");
	printf("c. mnozenie    d. dzielenie\n");
	ch = pobierz_pierwszy();
	while( (ch<'a' || ch>'d') && ch != 'k')
	{
		printf("Wpisz a, b, c, d lub k. \n");
		ch = pobierz_pierwszy();
	}
	return ch;
}

char pobierz_pierwszy(void)
{
	int ch;
	
	ch=getchar();
	while (getchar() != '\n')
		continue;
	return ch;
}

float pobierz_float(void)
{
	float num;
	char ch;
	
	while( (scanf("%f", &num) ) !=1 )
	{
		while( ( ch = getchar() ) != '\n' )
		putchar(ch);			//pomija dane wejsciowe
		printf(" nie jest liczba.\n");
		printf("Prosze podac liczbe, np -25.5,  13.0 czy 12.\n");
	}
	
	return num;
}

float pierwsza()
{
	float num1;
	
	printf("Podaj pierwsza liczbe:\n");
	num1=pobierz_float();
	
	return num1;
}

float druga()
{
	float num2;
	
	printf("Podaj druga liczbe:\n");
	num2=pobierz_float();
	
	return num2;
}

float dodawanie()
{
	float a,b,wynik;
	
	a=pierwsza();
	b=druga();
	wynik=a+b;
	printf("%.2f + %.2f = %.2f\n\n", a,b, wynik);
	
	return 0;
}

float odejmowanie(void)
{
	float a,b,wynik;
	
	a = pierwsza();
	b = druga();
	wynik=a-b;
	printf("%.2f - %.2f = %.2f\n\n", a,b, wynik);
	
	return 0;
}

float mnozenie(void)
{
	float a,b,wynik;
	
	a = pierwsza();
	b = druga();
	wynik=a*b;
	printf("%.2f * %.2f = %.2f\n\n", a,b, wynik);
	
	return 0;
}

float dzielenie(void)
{
	float a,b,wynik;
	
	a = pierwsza();
	b = druga();
	
	while (b == 0)
	{
		printf("Pamietaj cholero by nie dzielic przez zero!\n\n");
		printf("Podaj inna liczbe niz 0:\n");
		b = pobierz_float();
	}
		
	wynik=a/b;
	printf("%.2f \\ %.2f = %.2f\n\n", a,b, wynik);
	
	
	return 0;
}
