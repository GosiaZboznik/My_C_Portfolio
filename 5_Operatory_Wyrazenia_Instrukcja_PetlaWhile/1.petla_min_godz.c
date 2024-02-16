//1.petla_min_godz.c--przelicza czas w minutach na godziny i minuty

#include<stdio.h>
#define M_W_G 60    //liczba minut w jednej godzinie

int main(void)
{
	int czas, min, godz;
	printf("Podaj czas w minutach:(<=0 konczy program)\n");
	scanf("%d", &czas);
	
	while (czas>0)
	{
		godz=czas/M_W_G;   //liczba godzin w podanym czasie
		min=czas%M_W_G;     //liczba minut w podanym czasie
		printf("%d minut to %d godzin\(a\) i %d minut\(a\).\n", czas,godz,min);
		printf("Podaj kolejna wartosc:");
	    scanf("%d", &czas);
	}
    
    return 0;
}
     
