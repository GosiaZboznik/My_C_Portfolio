//2.zamienia_znak_na_kod--odczytuje dane wejsciowe do momentu napotkania EOF
//							i wyswietla kazdy znak wraz z jego dziesietnym kodem ASCII

#include <stdio.h>

int main() 
{
    int c;
    int count = 0;

    while ((c = getchar()) != EOF) 
	{
        if(c<33)
        {
        	switch(c) 			// Sprawdzanie znaków specjalnych
			{
				case 0: printf("\\0 %d  ", c);
						break;
				case 7: printf("\\a %d  ", c);
						break;
				case 8:	printf("\\b %d  ",c);
						break;
				case 9:	printf("\\t %d  ", c);
						break;
				case 10: printf("\\n %d  ", c);
						 break;
				case 11: printf("\\v %d  ", c);
						 break;
				case 12: printf("\\f %d  ", c);
						 break;
				case 13: printf("\\r %d  ", c);
						 break;
				case 32: printf("[SPACJA] %d  ", c);
						 break;
				default: printf("^%c %3d  ", c + 64, c);  // Dla znaków steruj¹cych, u¿ywamy ^ i dodajemy 64 do kodu ASCII
				
			}
		}

	    else 
	         printf("%c %3d  ", c, c);		           // Dla pozosta³ych znaków
		
		count++;						               // Nowy wiersz co dziesiêæ par znak-kod				
        if (count % 10 == 0 || c == '\n') 
            printf("\n");
    }

    return 0;
}
