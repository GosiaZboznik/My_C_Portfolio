//9.copy_array_VLA.c -- initializes a 3x5 two-dimensional array and copies it 
//		to another two-dimensional array, using a function that uses the VLA

#include<stdio.h>
#define ROWS 3
#define COLUMNS 5

void doubl_2d(int array[][COLUMNS], int rows);
void show_array(int array[][COLUMNS], int rows);
int main(void)
{

	int array[][COLUMNS] =
	{
		{2, 6, 8, 10, 12},
		{1, 3, 5, 7, 9},
		{1, 2, 3, 4, 5},
	};
	
	printf("Source array:\n");
	show_array(array, ROWS);
	
	printf("\nDoubled array:\n");
	doubl_2d(array, ROWS);
	show_array(array, ROWS);
	
	return 0;
}

void show_array(int array[][COLUMNS], int rows)
{
	int r, c;
	for(r=0; r<rows; r++)
	{
		for(c=0; c<COLUMNS; c++)
			printf("%3d ", array[r][c] );
		printf("\n");	
	}	
}
void doubl_2d(int array[][COLUMNS], int rows)
{
	int r, c;
	for(r=0; r<rows; r++)
		for(c=0; c<COLUMNS; c++)
			array[r][c]=2*array[r][c];
}


