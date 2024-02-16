//1c. niedomiar zmiennoprzecinkowej.c--bada jak zachowuje sie system w sytuacji niedomiaru liczby zmiennoprzecinkowej na naszym komputerze

#include<stdio.h>
int main(void)
{
	float a,b;
	b=2.0e20+1.0;
	a=b-2.0e20;
	
	printf("%f\n", a);
	
	return 0;
}
