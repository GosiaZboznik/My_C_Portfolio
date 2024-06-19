//5.difference_max_min.c -- returns the difference between the smallest and largest value in the array
#include <stdio.h>
#include <stdlib.h>

int maximum(int array[], int n);
int minimum(int array[], int n);

int main(void)
{
	int size,i;
	
	printf("Specify the size of the array: ");
    scanf("%d", &size);
	
	//dynamically allocate memory for the array
	int *array=malloc(size * sizeof(int));
	if (array == NULL) 
	{
        printf("Memory allocation error!\n");
        return 1;
    }
	
	// Inserting elements into the array
    printf("Provide %d integers:\n", size);
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &array[i]);
    }
	
	int a,b;
	a=maximum(array, size);
	b=minimum(array, size);
	
	printf("The difference between the smallest and largest value in the array is: %d\n", a-b);
	
	// Release of allocated memory
    free(array);
	
	return 0;
}

int maximum(int array[], int n)
{
	int i;
	int max = array[0];
	
	for(i=0; i<n; i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
			
	}
	
	return max;
}

int minimum(int array[], int n)
{
	int i;
	int min = array[0];
	
	for(i=0; i<n; i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
			
	}
	
	return min;
}
