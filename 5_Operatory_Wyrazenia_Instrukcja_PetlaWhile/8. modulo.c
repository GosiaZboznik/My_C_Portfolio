//8. modulo.c-- liczy reszt� z dzielenia przez podan� liczb�

#include <stdio.h>

int main(void)  
{
	int dzielnik,wynik,dzielna;
	
	printf("Program obliczajacy reszte z dzielenia.\n\n");
	printf("Podaj dzielnik (liczba calkowita):");
	scanf("%d", &dzielnik);
	printf("Podaj dzielna:");
	scanf("%d", &dzielna);
	
	while(dzielna>0)
	{
		wynik=dzielna%dzielnik;
	    printf("%d %% %d wynosi %d.\n", dzielna, dzielnik, wynik);
	    printf("Podaj dzielna (<=0, aby zakonczyc):");
	    scanf("%d", &dzielna);
	}
	
    printf("Koniec.");
    return 0;
}


