//4.wzrost,imie-- pobiera wzrost w cm oraz imie i je wyswietla

#include<stdio.h>

int main(void)
{
	char imie[30];
	float wzrostcm;
	float wzrostm;
	
	printf("Hej, jak masz na imie?\n");
	scanf("%s",imie);
	printf("Jaki jest Twoj wzrost w cm?\n");
	scanf("%f", &wzrostcm);
	wzrostm=wzrostcm/100;        //zamienia cm na metry
	printf("%s, masz %.2f metra wzrostu.", imie, wzrostm );
	
	return 0;
}
