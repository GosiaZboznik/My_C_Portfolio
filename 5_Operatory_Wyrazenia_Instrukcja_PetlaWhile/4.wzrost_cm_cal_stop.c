//4.wzrost_cm_cal_stop--zamienia wzrost w cm na stopy i cale

#include<stdio.h>
#define STOPA 30.48 // 1 stopa jest rowna 30.48 cm
#define CAL 2.54    // 1 cal jest rowny 2.54 cm

int main(void)
{
	float cm, cale;
	int stopy;
	
	printf("Podaj wzrost w centymetrach:\n");
	scanf("%f", &cm);
	
	while(cm>0)
	{
		stopy=cm/STOPA;
		cale=cm/CAL;
		
		printf("%.1f cm = %d stop, %.2f cali\n", cm, stopy, cale);
		printf("Podaj wzrost w centymetrach (<=0-koniec):\n");
		scanf("%f", &cm);
	}
	
	printf("Do widzenia!\n");
	
	
	return 0;
}
