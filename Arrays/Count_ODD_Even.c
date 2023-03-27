#include <stdio.h>

int main()
{
    int arr[100], i, n, even_count = 0, odd_count = 0;
    printf("Enter the size of an array : ");
    scanf("%d", &n);

    printf("Enter the elements of the array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("Total number of Even numbers : %d\n", even_count);
    printf("Total number of Odd numbers : %d\n", odd_count);

    return 0;
}
