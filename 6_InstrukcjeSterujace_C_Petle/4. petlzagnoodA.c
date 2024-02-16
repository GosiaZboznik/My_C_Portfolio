//4. petlzagnoodA.c--za pomoca petli zagniezdzonych wyswietla wzor od litery A
#include<stdio.h>

int main(void)
{
	const int RZEDY=6;
	
	int rzad, kolumna;
	char ch='A';
	
	for(rzad=0;rzad<RZEDY;rzad++)
	{
		for(kolumna=0;kolumna<=rzad;kolumna++,ch++)
			printf("%c", ch);
		printf("\n");	
	}
	return 0;
}
