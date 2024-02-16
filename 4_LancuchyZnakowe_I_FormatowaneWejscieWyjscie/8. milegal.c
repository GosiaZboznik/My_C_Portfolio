//8. milegal.c -- liczy zuzycie paliwa  w milach/galon i w litrach/100 km
#include<stdio.h>
#define GALON 3.785 // 1 galon=3,785 litra
#define MILA 1.609  // 1 mila= ok 1,609 km


int main(void)
{
	float mile,galony,spalus,spaleu,liczbakm;
	
	printf("Podaj liczbe przebytych mil:\n");
	scanf("%f", &mile);
	printf("Podaj liczbe zuzytych galonow paliwa:\n");
	scanf("%f", &galony);
	spalus=mile/galony;
	liczbakm=spalus*MILA;         //liczy ilosc km na 1 galon
	spaleu=(GALON*100)/liczbakm;  //liczy ilosc litrow na 100 km 
	
	printf("Poziom zuzycia paliwa wynosi %.1f mil/galon lub %.1f l/100km", spalus,spaleu);

	
	return 0;
}
