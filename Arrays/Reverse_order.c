#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    printf("The original array elements are: \n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe array elements in reverse order are: \n");
    for (int i=n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
