 //13. pot2-- tworzy 8-elementowa tablice typu int i przypisuje jej jej potegi dwojki

#include<stdio.h>
#define ROZMIAR 8

int main(void)
{
	int pot[ROZMIAR];
	int index, iloczyn;
	
	for(index=1, iloczyn=1;index<=ROZMIAR;index++, iloczyn=iloczyn*2)
		pot[index]=2*iloczyn;
	
	index=1;	
	do
	{
		printf("%d ", pot[index]);
		index++; 
				
	} while(index<=ROZMIAR);
	
	return 0;
		
}
