//2. znaki z kodem ASCII -- odczytuje dane wejsciowe i wyswietla je z kodem ASCII

#include <stdio.h>
#define STOP '#'

int main(void)
{
	char ch;
	int licznik=1;
		
	printf("Wprowadz dane a podam Ci ich kod w ASCII (znak # przerywa prace programu):\n");
	while((ch=getchar()) != STOP)
	{
		if(ch==' ')                         //wyswietla znak spacji
			printf("' '%d   ",ch);
		else if(ch=='\n')					//wyswietla znak Enter	
			{
				printf("\\n %d   ",ch);
				licznik=0;				
			}
		else
			printf("%c%4d   ",ch, ch);
		if (licznik%8==0)
			printf("\n");
		licznik++;
	}

return 0;
}
