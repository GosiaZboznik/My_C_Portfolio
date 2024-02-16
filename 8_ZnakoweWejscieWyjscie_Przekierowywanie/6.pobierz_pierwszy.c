// 6.pobierz_pierwszy -- zwraca pierwszy napotkany znak drukowany

#include<stdio.h>
#include<ctype.h>

char pobierz_pierwszy(void);

int main(void)
{
	printf("Pierwszy znak drukowalny:%c\n", pobierz_pierwszy() );
	
	return 0;
}

char pobierz_pierwszy(void)
{
	char ch;
	while((ch=getchar() ) != EOF)
	{
		if( isgraph(ch) )					//sprawdzenie czy znak jest drukowalny
		{
			while(getchar() != '\n')		//usuniecie pozostalych znakow -- (mozna pominac ta instrukcje)
				continue;					
			return ch;						//zwrocenie pierwszego znaku drukowalnego
		}	
	}
	return EOF; 							//Jesli nie ma wiecej znakow na wejsciu, zwroc EOF
}


