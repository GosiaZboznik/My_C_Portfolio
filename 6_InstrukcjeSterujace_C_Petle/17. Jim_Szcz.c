 //17. Jim_Szcz-- sprawdza kiedy  Jim oprozni calkowicie konto
 
#include<stdio.h>
#define KWOTA 1000000
#define PROCSKLAD 0.08
#define WYPLATA 100000

int main(void)
{
	int rok;
	float sum;
	
	for(sum=KWOTA, rok=1; sum>0; rok++)
		sum=sum+PROCSKLAD*sum-WYPLATA;
		
	printf("Uplynie %d lat(a) zanim Jim Szczesciarz calkowicie oprozni swoje konto.\n",rok);
	printf("Kwota pozostala po %d latach to:%.2f\n", rok,sum);

	return 0;
		
}
