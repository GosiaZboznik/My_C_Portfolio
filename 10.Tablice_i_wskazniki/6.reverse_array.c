//6.reverse_array -- reverses the order of elements in arrays
#include <stdio.h>
#include <stdlib.h>

void swap(double *beginning, double *end);

int main(void)
{
	int size,i;
	
	printf("Specify the size of the array: ");
    scanf("%d", &size);
	
	//dynamically allocate memory for the array
	double *array=malloc(size * sizeof(double) );
	if (array == NULL) 
	{
        printf("Memory allocation error!\n");
        return 1;
    }
	
	// Inserting elements into the array
    printf("Provide %d floating point numbers:\n", size);
    for (i = 0; i < size; i++) 
	{
        scanf("%lf", &array[i]);
    }
	
	printf("Initially:\n");
	for (i = 0; i < size; i++) 
	{
        printf("%.2f ", array[i]);
    }
	swap(array, array+size-1);
	printf("\nAnd in reverse order:\n");
	for (i = 0; i < size; i++) 
	{
        printf("%.2f ", array[i]);
    }
	
	// Release of allocated memory
    free(array);
	
	return 0;
}


void swap(double *beginning, double *end)
{
	while (beginning < end) 
	{
		double temp = *beginning;
		*beginning = *end;
		*end = temp;
		beginning++;
		end--;
	}
}
