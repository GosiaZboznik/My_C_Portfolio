//2.10wiecej-- wyswietla wszystkie liczby calkowite od tej wartosci do wartosci wiekszej o 10

#include<stdio.h>

int main(void)
{
	int liczba1,liczba2;
	
	printf("Program wyswietla wszystkie liczby calkowite " 
	       "od liczby podanej do liczby o 10 wiekszej.\n\n");
	printf("Podaj liczbe calkowita:");
	scanf("%d", &liczba1);
	liczba2=liczba1++;
	
	while(liczba2<liczba1+10)
			printf("%-9d", liczba2++);
	
    return 0;
}
