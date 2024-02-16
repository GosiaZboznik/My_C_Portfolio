//zamienia kod na znak.c

#include<stdio.h>
int main(void)
{
	char kod;

	
	printf("Podaj kod ASCII\n"); //uzytkownik podaje znak
	scanf("%d", &kod);
	printf("Kodowi ASCII %d odpowiada znak %c", kod,kod);
	
	return 0;
}

