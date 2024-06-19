//10.sum_two_arrays -- assigns to each element of an array the sum of the values 
//						of the corresponding elements in two other arrays

#include<stdio.h>
#define SIZE 5

void sum(double source1[], double source2[], double dest[], int size);
void show_array(double array[], int size);
int main(void)
{
	int i, j;
	double source1 [SIZE] = {4.5, 4.4, 4.3, 4.2, 4.1};
	double source2 [SIZE] = {6.5, 6.4, 6.3, 6.2, 6.1};
	double dest[SIZE];
	
	printf("First array:\n");
	show_array(source1,SIZE);
	
	printf("\nSecond array:\n");
	show_array(source2, SIZE);
	
	printf("\nSum of arrays:\n");
	sum(source1, source2, dest, SIZE);
	show_array(dest,SIZE);
	
	return 0;
}

void sum(double source1[], double source2[], double dest[], int size)
{
	int i;
	for(i=0; i<size; i++)
			dest[i]=source1[i]+source2[i];
}

void show_array(double array[], int size)
{
	int i;
	for(i=0; i<size; i++)
		printf("%.2lf  ", array[i] );
	printf("\n");		
}
