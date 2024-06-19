//8.copy_array_7dim_to3dim.c-- copies the contents of an array 7-dimensional 
// 					to 3-dimensional array using arrays and pointers

#include <stdio.h>
#include <stdlib.h>
#define SIZE1 7
#define SIZE2 3
#define FROM_PLACE 3

void copy_array(double source[], double dest[], int n);
void copy_pointer(double *source, double *dest2, double *end);

int main(void) 
{
   
    int i;
    
    // Dynamic allocation of arrays
    double *source = malloc(SIZE1 * sizeof(double));
    double *dest = malloc(SIZE2 * sizeof(double));
    double *dest2 = malloc(SIZE2 * sizeof(double));
    
    if (source == NULL || dest == NULL || dest2 == NULL ) 
    {
        printf("Memory allocation error!\n");
        return 1;
    }
    
    // Inserting elements into the array
    printf("Provide %d floating point numbers:\n", SIZE1);
    for (i = 0; i < SIZE1; i++) 
	{
        scanf("%lf", &source[i]);
    }
	
	printf("First array:\n");
	for (i = 0; i < SIZE1; i++) 
	{
        printf("%.1lf  ", source[i]);
    }
	
	printf("\nSecond array:\n");
	copy_array(source, dest, SIZE2);
	 for (i = 0; i < SIZE2; i++) 
    {
        printf("%.1lf  ", dest[i]);
    }
    
    printf("\nThird array:\n");
    copy_pointer(source, dest2, dest2+SIZE2);
    for (i = 0; i < SIZE2; i++) 
	{
        printf("%.1lf  ", dest2[i]);
    }
    
    // Release of allocated memory
    free(source);
    free(dest);
    free(dest2);
    
    return 0;
}

void copy_array(double source[], double dest[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		dest[i]=source[i+FROM_PLACE-1];	
	}	
}

void copy_pointer(double *source, double *dest2, double *end)
{
	source+=FROM_PLACE-1;
	while(dest2<end)
	{	
		*dest2=*source;
		dest2++;
		source++;
	}	
}

