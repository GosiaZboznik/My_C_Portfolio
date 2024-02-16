 //18. liczba_znajom--oblicza ilosc znajomych po kolejnych tygodniach zgodnie ze wzorem
 
#include<stdio.h>
#define ZNAJOMI 5
#define DUNBARA 150

int main(void)
{
	int znaj[30];
	int tydz;
	
	for(tydz=1, znaj[tydz]=ZNAJOMI;znaj[tydz]<=150;tydz++)
		znaj[tydz+1]=(znaj[tydz]-tydz)*2;
	
	printf("Liczba znajomych po %d tygodniach wyniesie %d.\n",tydz-2,znaj[tydz-1]);

	return 0;
		
}
