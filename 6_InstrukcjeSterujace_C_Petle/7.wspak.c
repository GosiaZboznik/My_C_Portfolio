//7.wspak--wczytuje pojedyncze s³owo i wyswietla je wspak

#include<stdio.h>
#include<string.h>

int main(void)
{
	char slowo[30];
	int index;
	
	printf("Podaj slowo a wyswietle Ci je wspak!:\n");
	scanf("%s", slowo);
	index=strlen(slowo);
	
	for(index;index>=0;index--)
		printf("%c",slowo[index-1]);

	return 0;
}
