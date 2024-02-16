//2.imie--pobiera imie a nastepnie wyswietla je na rozne sposoby

#include<stdio.h>
#include<string.h>

int main(void)
{
	char imie[30];
	
	printf("Hej, jak masz na imie?\n");
	scanf("%s",imie);
	printf("a)\"%s\"\n", imie);     //a) wyswietla je w cudzyslowie
	printf("b)\"%20s\"\n", imie);   //b) wyswietla je w polu o szerokosci 20 znakow; cale pole ujete w cudzyslow; imie przy prawej krawedzi
	printf("c)\"%-20s\"\n", imie);  //c) wyswietla je w polu o szerokosci 20 znakow; cale pole ujete w cudzyslow; imie przy lewej krawedzi
	printf("d)\"%-*s\"\n", strlen(imie)+3,imie);    //d) wyswietla je w polu o trzy znaki dluzszym niz imie
	
	return 0;
}
