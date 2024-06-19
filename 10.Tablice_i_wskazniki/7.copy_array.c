//2.copy_array.c -- copies the contents of an array to another array
// 					using arrays and pointers

#include <stdio.h>
#include <stdlib.h>

void copy_array(int rows, int cols, double **array, double **dest1);
void copy_pointer(double **array, double *dest2, int rows, int cols);

int main(void)
{
	int rows,cols,i,k;
	
	printf("Specify number of rows: ");
    scanf("%d", &rows);
    printf("Specify number of columns: ");
    scanf("%d", &cols);
	
	// Dynamic allocation of arrays
	
	// array
    double **array = malloc(rows * sizeof(double *));
    if (array == NULL) 
    {
        printf("Memory allocation error!\n");
        return 1;
    }
    for (i = 0; i < rows; i++)
    {
        array[i] = malloc(cols * sizeof(double));
        if (array[i] == NULL) 
        {
            printf("Memory allocation error!\n");
            return 1;
        }
    }

	// dest 1
	double **dest1 = malloc(rows * sizeof(double *));
    if (dest1 == NULL) 
    {
        printf("Memory allocation error!\n");
        return 1;
    }
    for (i = 0; i < rows; i++)
    {
        dest1[i] = malloc(cols * sizeof(double));
        if (dest1[i] == NULL) 
        {
            printf("Memory allocation error!\n");
            return 1;
        }
    }
   
    // dest 2
    double *dest2 = malloc(rows * cols * sizeof(double));
    if (dest2 == NULL) 
    {
        printf("Memory allocation error!\n");
        return 1;
    }
    
	// Inserting elements into the array
    printf("Provide %d floating point numbers:\n", rows*cols);
    for (i = 0; i < rows; i++) 
	{
        for (k=0; k<cols; k++)
			scanf("%lf", &array[i][k]);
    }
	
	// Displaying the 2D array
    printf("First array:\n");
    for (i = 0; i < rows; i++) 
    {
        for (k = 0; k < cols; k++) 
        {
            printf("%.1lf  ", array[i][k]);
        }
        printf("\n");
    }
	
	printf("\nSecond array:\n");
	copy_array(rows, cols, array, dest1);
	 for (i = 0; i < rows; i++) 
    {
        for (k=0; k<cols; k++)
			printf("%.1lf  ", dest1[i][k]);
		printf("\n");
    }
	
	printf("\nThird array:\n");
    copy_pointer(array, dest2, rows, cols);
    for (i = 0; i < rows; i++) 
	{
        for (k=0; k<cols; k++)
			printf("%.1lf  ", dest2[i*cols+k]);
		printf("\n");
    }
    
    // Freeing the allocated memory
    for (i = 0; i < rows; i++)
    {
        free(array[i]);
    }
    free(array);
    
    for (i = 0; i < rows; i++)
    {
        free(dest1[i]);
    }
    free(dest1);
    
    free(dest2);
	
	return 0;
}

void copy_array(int rows, int cols, double **array, double **dest1)
{
	int i,k;
	
	for (i = 0; i < rows; i++) 
	{
        for (k=0; k < cols; k++)
			dest1[i][k]=array[i][k];
    }		
}

void copy_pointer(double **array, double *dest2, int rows, int cols)
{
	int i, k;
    
    for (i = 0; i < rows; i++)
    {
        for (k = 0; k < cols; k++)
        {
            *dest2 = array[i][k];
            dest2++;
        }
    }
}


