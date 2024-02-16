//7. doubleandfloat.c -- przypisuje zmiennym float i double wartosc 1.0/3.0, plik zalacza float.h

#include<stdio.h>
#include<float.h>

int main(void)
{
	double liczba1=1.0/3.0;
	float liczba2=1.0/3.0;
	
	printf("%.4f\n%.4f\n\n", liczba1, liczba2);
	printf("%.12f\n%.12f\n\n", liczba1, liczba2);
	printf("%.16f\n%.16f\n\n", liczba1, liczba2);
	printf("Minimalna liczba dziesietnych cyfr znaczacych dla typu double:%d\n", DBL_DIG);
	printf("Minimalna liczba dziesietnych cyfr znaczacych dla typu float:%d\n", FLT_DIG);
	
	return 0;
}
