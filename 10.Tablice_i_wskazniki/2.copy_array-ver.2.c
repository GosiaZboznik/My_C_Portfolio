//2.copy_array.c -- copies the contents of an array to another array
// 					using arrays and pointers

#include <stdio.h>
#include <stdlib.h>

void copy_array(double source[], double dest1[], int n);
void copy_pointer(double *source, double *dest2, double *end);

int main(void)
{
	int size,i;
	
	printf("Specify the size of the array: ");
    scanf("%d", &size);
	
	// Dynamic allocation of arrays
    double *source = malloc(size * sizeof(double));
    double *dest1 = malloc(size * sizeof(double));
    double *dest2 = malloc(size * sizeof(double));

    if (source == NULL || dest1 == NULL || dest2 == NULL) 
    {
        printf("Memory allocation error!\n");
        return 1;
    }
	
	// Inserting elements into the array
    printf("Provide %d floating point numbers:\n", size);
    for (i = 0; i < size; i++) 
	{
        scanf("%lf", &source[i]);
    }
	
	printf("First array:\n");
	for (i = 0; i < size; i++) 
	{
        printf("%.1lf  ", source[i]);
    }
	
	printf("\nSecond array:\n");
	copy_array(source, dest1, size);
	 for (i = 0; i < size; i++) 
    {
        printf("%.1lf  ", dest1[i]);
    }	
	
	printf("\nThird array:\n");
    copy_pointer(source, dest2, source+size);
    for (i = 0; i < size; i++) 
	{
        printf("%.1lf  ", dest2[i]);
    }
    
	// Release of allocated memory
    free(source);
    free(dest1);
    free(dest2);
	
	return 0;
}

void copy_array(double source[], double dest1[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		dest1[i]=source[i];	
	}
			
}

void copy_pointer(double *source, double *dest2, double *end)
{
	while(source<end)
	{
		*dest2= *source;
		dest2++;
		source++;
	}	
}


