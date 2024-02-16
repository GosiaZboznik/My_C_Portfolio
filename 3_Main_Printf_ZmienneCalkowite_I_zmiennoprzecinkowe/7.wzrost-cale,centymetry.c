//7.wzrost-cale,centymetry--zamienia cale na centymetry i na odwrot

#include <stdio.h>

int main(void)
{
	float cal,wzrostcm,wzrostcal, wynikcm, wynikcal;

	printf("Podaj swoj wzrost w cm :\n");
	scanf("%f", &wzrostcm);
	
    wynikcal=wzrostcm/2.54;     //zamienia cm na cale; 1 cal =2,54cm
    printf("Twoj wzrost to %.2f cm ktore jest rowne %.2f calom.\n", wzrostcm, wynikcal);
    
    printf("Podaj swoj wzrost w calach :\n");
	scanf("%f", &wzrostcal);
    wynikcm=wzrostcal*2.54;   //zamienia cale na cm; 1 cal =2,54cm
    
	printf("Twoj wzrost to %.2f cali ktore jest rowne %.2f cm.", wzrostcal, wynikcm);
	
	return 0;
}

	
