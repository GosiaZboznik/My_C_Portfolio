//9.copy_array_VLA.c -- initializes a 3x5 two-dimensional array and copies it 
//		to another two-dimensional array, using a function that uses the VLA

#include<stdio.h>
#define ROWS 3
#define COLUMNS 5

void copy2d(int rows, int cols, double source[rows][cols], double dest[rows][cols]);
void show_array(int rows, int cols, double array[rows][cols]);
int main(void)
{
	int i, j;
	double dest[ROWS][COLUMNS];
	
	double temp [ROWS] [COLUMNS]=
	{
		{4.5, 4.4, 4.3, 4.2, 4.1},
		{5.5, 5.4, 5.3, 5.2, 5.1},
		{6.5, 6.4, 6.3, 6.2, 6.1},
	};
	copy2d(ROWS, COLUMNS, temp, dest);
	
	printf("Source board:\n");
	show_array(ROWS,COLUMNS,temp);
	
	printf("\nTarget board:\n");
	show_array(ROWS,COLUMNS,temp);
	
	return 0;
}

void copy2d(int rows, int cols, double source[rows][cols], double dest[rows][cols] )
{
	int r, c;
	for(r=0; r<rows; r++)
		for(c=0; c<cols; c++)
			dest[r][c]=source[r][c];
}

void show_array(int rows, int cols, double array[rows][cols])
{
	int r, c;
	for(r=0; r<rows; r++)
	{
		for(c=0; c<cols; c++)
			printf("%.2lf ", array[r][c] );
		printf("\n");	
	}	
}
