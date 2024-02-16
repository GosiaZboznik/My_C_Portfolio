//8. zmiennprzecink--program pobiera dwie liczby zmiennoprzecinkowe 
//i wyswietla wartosc ich roznicy podzielonej przez ich iloczyn

#include<stdio.h>
#include<string.h>

int main(void)
{
	float num1, num2, wynik, roznica, iloczyn;
	
	printf("Podaj dwie liczby zmiennoprzecinkowe:\n");
	
	while(scanf("%f" ,&num1)==1, scanf("%f" ,&num2)==1)
	{
		roznica=num1-num2;
		iloczyn=num1*num2;
    	wynik=roznica/iloczyn;
		printf("Wynik tego dzialania to:\n %f\n", wynik);	
		
		printf("Podaj kolejne, dwie liczby zmiennoprzecinkowe:\n");	
	}

	printf("Koniec.");
	return 0;
}
