//3.tyg_dni.c-- zamienia dni na tygodnie i dni

#include<stdio.h>
const int TYDZ = 7;   //liczba dni w tygodniu

int main(void)
{
	int liczba,tyg,dni;
	
	printf("Podaj liczbe dni:\n(<=0 to koniec)\n");
	scanf("%d", &liczba);
	
	while(liczba>0)
	{
		tyg=liczba/TYDZ;       // przelicza liczbe dni na tygodnie
	    dni=liczba%TYDZ;       // liczy ile dni zostalo
		printf("%d dni to %d tygodnie, %d dni\n", liczba, tyg, dni);
		scanf("%d", &liczba);
	}
	     	
    return 0;
}
