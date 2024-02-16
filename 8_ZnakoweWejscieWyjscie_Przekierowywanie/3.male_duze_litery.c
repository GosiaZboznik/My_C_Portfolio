//3.male_duze_litery--zlicza male i duze litery oraz liczbe pozostalych znakow

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char c;
	long ile_znakow=0L;
	long ile_M_liter=0L;		//ilosc malych liter
	int ile_W_liter=0;			//ilosc wielkich liter
	

	while((c=getchar())!=EOF)
		{
			if(islower(c))		//tylko male litery
				ile_M_liter++;
			else if(isupper(c))	//tylko wielkie litery
				ile_W_liter++;
			else				//pozostale znaki
				ile_znakow++;
		}
	printf("Liczba malych liter: %ld\n",ile_M_liter);
	printf("Liczba wielkich liter: %d\n",ile_W_liter);
	printf("Liczba pozostalych znakow: %ld\n",ile_znakow);
	
	getchar();
	return 0;
		
}


