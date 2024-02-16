//2. wzordolar.c--za pomoca petli zagniezdzonych wyswietla wzor
#include<stdio.h>

int main(void)
{
	const int RZEDY=5;
	
	int rzad, kolumna;
	
	for(rzad=0;rzad<RZEDY;rzad++)
	{
		for(kolumna=0;kolumna<=rzad;kolumna++)
			printf("$");
		printf("\n");	
	}
	return 0;
}
