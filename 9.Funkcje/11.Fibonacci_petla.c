//11.Fibonacci_petla.c -- oblicza ciag Fibonacciego za pomoca petli

#include <stdio.h>

unsigned long Fibonacci(unsigned n);

int main(void)
{
	unsigned long n;
	unsigned long suma;
	
	printf("Podaj liczbe calkowita: \n");
	while(scanf(" %d", &n) == 1)
	{
		suma=Fibonacci(n);
		printf("Wartosc ciagu Fibonacciego dla n = %d wynosi: %ld\n",n,suma);
		printf("Podaj liczbe calkowita. \n");
		printf("Wcisnij q aby zakonczyc dzialanie programu.\n");
		putchar('\n');
	}
	printf("Gotowe.\n");
	
	return 0;
}

unsigned long Fibonacci(unsigned n)
{
	unsigned long suma1=1;
	unsigned long suma2=1;
	unsigned long suma;
	unsigned licznik=2;
	
	if(n>2)
		{
			while(licznik<n)
			{
				suma=suma1+suma2;
				licznik++;
				suma1=suma2;
				suma2=suma;
			
			}
		return suma;
		}
	else
		return 1;
}
