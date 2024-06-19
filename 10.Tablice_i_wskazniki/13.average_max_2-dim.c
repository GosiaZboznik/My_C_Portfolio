//13.average_max_2-dim  -- 	asks the user to specify 3 sets consisting 
//							of five numbers of type double and then:
//							a) writes this data into a 3 by 5 array
//							b) calculates the average for each set separately 
//							c) calculates the average for all values
//							d) finds the largest of the 15 values

#include<stdio.h>
#define ROWS 3
#define COLUMNS 5

void show_array(double array[][COLUMNS], int rows);
void down_num(double array[][COLUMNS], int rows);
double average_coll(double array[], int size);
double average(double *start, double *end, int size);
double maximum(double *start, double *end);

int main(void)
{
	int r;
	double avg_coll, avg, max_value;
	double array[ROWS][COLUMNS];
	
	printf("Give %d sets consisting of %d numbers of double type.\n", ROWS, COLUMNS);
	down_num(array, ROWS);
	printf("\nArray %dx%d\n", ROWS, COLUMNS);
	show_array(array,ROWS);
	
	for( r=0; r<ROWS; r++ )
	{
		avg_coll = average_coll(array[r], COLUMNS);	
		printf( "\nAverage of the %d collection:\n", r+1 );
		printf( "%.2lf\n", avg_coll );
	}
	
	avg = average(&array[0][0], &array[0][0] + ROWS*COLUMNS, ROWS*COLUMNS);
	printf("\nAverage of all values: %.2lf\n", avg);
	
	max_value=maximum(&array[0][0], &array[0][0] + ROWS*COLUMNS);
	printf("\nMaximum value: %.2lf\n", max_value);

	
	return 0;
}

//downloads data from the user
void down_num(double array[][COLUMNS], int rows)
{
	int r, c;
	for(r=0; r<rows; r++)
	{	
		printf("\n%d collection:\n", r+1);		
		for(c=0; c<COLUMNS; c++)
		{
			printf("Enter number %d: ", c + 1);
			scanf("%lf", &array[r][c] );
		}			
	}
}

//function displaying arrays
void show_array(double array[][COLUMNS], int rows)
{
	int r, c;
	for(r=0; r<rows; r++)
	{
		for(c=0; c<COLUMNS; c++)
			printf("%.2lf  ", array[r][c] );
		printf("\n");	
	}	
}

//calculate the average for each set separately
double average_coll(double array[], int size)
{
	int i;
	double sum = 0.0;
		
	for(i=0; i<size; i++)
		sum += array[i];
		
	return sum/size;
}

//calculates the average of all values
double average(double *start, double *end, int size)
{
	double suma = 0.0;
	
	while( start<end )
	{
		suma += *start;
		start++;	
	}
	
	return suma/size;
}
//Finds the maximum value
double maximum(double *start, double *end)
{
	double max = *start;
	while( start<end )
	{
		if(*start > max)
			max=*start;
		start++;	
	}
	
	return max;
}


