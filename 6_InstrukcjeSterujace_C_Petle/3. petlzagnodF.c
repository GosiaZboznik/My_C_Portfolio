//3.petlzagnodF.c--za pomoca petli zagniezdzonych wyswietla wzor od litery F do A
#include<stdio.h>

int main(void)
{
	const int RZEDY=6;
	
	int rzad, kolumna;
	char ch;
	
	for(rzad=0;rzad<RZEDY;rzad++)
	{
		for(kolumna=0,ch='F';kolumna<=rzad;kolumna++,ch--)
			printf("%c", ch);
		printf("\n");	
	}
	return 0;
}
