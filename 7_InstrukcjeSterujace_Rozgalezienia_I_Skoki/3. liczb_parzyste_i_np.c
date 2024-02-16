//3. liczb_parzyste_i_np -- wyswietla ilosc wpisanych liczb parzystych i ich srednia wartosc
//							oraz liczb nieparzystych

#include <stdio.h>
#define STOP 0

int main(void)
{
	int liczba;
	int l_p=0;
	int l_np=0;
	int suma_l_p=0L;
	int suma_l_np=0L;
	int sr_p;
	int sr_np;
		
	printf("Wprowadz liczby (cyfra 0 przerywa prace programu):\n");
	while( scanf("%d", &liczba) == 1 && liczba != STOP)
	{
		if((liczba%2)== 0)
			{
				l_p++;
				suma_l_p=suma_l_p+liczba;
			}
		else
			{
				l_np++;
				suma_l_np=suma_l_np+liczba;
			}	
	}
	
	if(l_p == 0)
        sr_p = 0; // Ustaw na 0, jeœli nie ma liczb parzystych
    else
        sr_p = suma_l_p / l_p;

    if(l_np == 0)
        sr_np = 0; // Ustaw na 0, jeœli nie ma liczb nieparzystych
    else
        sr_np = suma_l_np / l_np;
	
	
	printf("Ilosc liczb parzystych wynosi %d, ich srednia wartosc to %d\n"
		   "Ilosc liczb nieparzystych wynosi %d, ich srednia wartosc to %d ", l_p,sr_p, l_np, sr_np);
	
	getchar();
	getchar();
	return 0;
}
