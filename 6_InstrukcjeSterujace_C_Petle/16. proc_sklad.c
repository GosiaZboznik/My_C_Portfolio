 //16. proc_sklad.c-- porownuje procent prosty i skladany
 
#include<stdio.h>
#define KWOTA 100
#define PROCPROS 0.1
#define PROCSKLAD 0.05

int main(void)
{
	int index;
	float sum1,sum2;
	
	for(sum1=KWOTA,sum2=KWOTA, index=1; sum1>=sum2; index++)
		{
		sum1=sum1+PROCPROS*KWOTA;
		sum2=sum2+PROCSKLAD*sum2;
		}
	printf("Wartosc inwestycji Pani Kasi przekroczy wartosc inwestycji Pani Ewy po %d latach.\n",index);
	printf("Pani Ewa bedzie miala wowczas %.3f zl a Pani Kasia %.3f zl.",sum1, sum2);

	return 0;
		
}
