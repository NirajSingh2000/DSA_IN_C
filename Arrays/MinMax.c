#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int arr[MAX_SIZE];
	int i, max, min, size;

	/* Input size of the array */
	printf("Enter size of the array: ");
	scanf("%d", &size);

	/* Input array elements */
	printf("Enter %d elements in the array: ", size);
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}

	/* Assume first element as minimum and maximum */
	min = arr[0];
	max = arr[0];

	for(i=1; i<size; i++)
	{
		/* If current element is greater than maximum */
		if(arr[i] > max)
		{
			max = arr[i];
		}

		/* If current element is smaller than minimum */
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}

	/* Print the maximum and minimum element */
	printf("Maximum element = %d\n", max);
	printf("Minimum element = %d", min);

	return 0;
}
