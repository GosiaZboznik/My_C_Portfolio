//8. zmiennprzecink--program pobiera dwie liczby zmiennoprzecinkowe 
//i wyswietla wartosc ich roznicy podzielonej przez ich iloczyn

#include<stdio.h>
void dzialanie(float n1, float n2);

float main(void)
{
	float num1,num2;
	
	printf("Podaj dwie liczby zmiennoprzecinkowe:\n");
	
	while(scanf("%f" ,&num1)==1, scanf("%f" ,&num2)==1)  //pobiera dwie zmienne i sprawdza czy sa zmiennoprzecinkowe
	{
		dzialanie(num1, num2);
	}

	printf("Koniec.");
	return 0;
}

void dzialanie(float n1,float n2)                       //funkcja wykonujaca obliczenia
{
	float wynik, roznica, iloczyn;
	
	roznica=n1-n2;
	iloczyn=n1*n2;
    wynik=roznica/iloczyn;
	printf("Wynik tego dzialania to:\n %f\n", wynik);
	printf("Podaj kolejne, dwie liczby zmiennoprzecinkowe (k--koniec):\n");	
}
