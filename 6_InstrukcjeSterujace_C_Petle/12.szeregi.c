// 12.szeregi.c--oblicza wartosc wyrazow szeregow
#include<stdio.h>

int main(void)
{
	int num, granica;
	int mn, n;
	double suma1, suma2;
	
	printf("Ile wyrazow chcesz zsumowac?:\n");
	while(scanf("%d", &granica)==1)
	{
	for(suma1=0.0,num=2; num<=granica+1;num++)   //petla sumujaca sum1
		suma1+=1.0/num;
	printf("Suma szeregu   1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... wynosi: %f\n", suma1);
	
	for(suma2=0.0,num=2; num<=granica+1;num++)   //petla sumujaca sum2
		{
			for(mn=1, n=1;n<num;n++)             //petla ustalajaca znak dla liczby
				mn=mn*(-1);
			suma2=suma2+mn*(1.0/num);
	    }		
	printf("Suma szeregu - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... wynosi:%lf\n", suma2);
	printf("Ile wyrazow chcesz zsumowac?--k-koniec:\n");
    }
    printf("Koniec.");
	return 0;
}


