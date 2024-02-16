//6.kwadrat_szescian--program wyswietlajcy tabele z szscianem i kwadratem w zakresie liczb podanych przez uzytkownika

#include<stdio.h>

int main(void)
{
	int num,num1,num2;
	printf("Podaj zakres (2 liczby) w jakich ma sie miescic potegowanie:\n ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	printf("    n     n do kwadratu     n do szescianu\n");
	for(num=num1;num<=num2;num++)
		printf("%5d %17d %18d\n", num, num*num, num*num*num);
		
	return 0;
}
