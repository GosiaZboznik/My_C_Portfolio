//liczby zmiennoprzecinkowe.c--pobiera  liczbe zmiennoprzecinkowa i wyswietla ja w postaci ulamka dziesietnego, notacji wykladniczej i w notacji p

#include <stdio.h>
int main(void)
{
	double liczba;
	printf("Podaj liczbe zmiennoprzecinkowa:\n");
	scanf("%lf", &liczba);
	printf("Ta liczba w systemie dziesietnym to %f, w notacji wykladniczej %e i %a w notacji p", liczba, liczba, liczba);
	
	return 0;
}
