//8.1.zlicza_znaki.c--zlicza znaki az do wystapienia konca pliku

#include<stdio.h>

int main(void)
{
	char c;
	long ile_znakow=0L;
	

	while((c=getchar())!=EOF)
		{
			ile_znakow++;
		}
	printf("Liczba znakow w podanym tekscie wynosi: %d\n",ile_znakow);
	
	
	return 0;
		
}


