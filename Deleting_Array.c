#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, i, j, del_num;
    int *arr = NULL;

    /* Input size and elements of array */
    printf("Enter size of array: ");
    scanf("%d", &num);

    arr = (int *)malloc(num * sizeof(int));
    printf("Enter elements in array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Input value to delete from array */
    printf("Enter element to delete from array : ");
    scanf("%d", &del_num);

    /* Find location of value to delete */
    for(i=0; i<num; i++)
    {
        if(arr[i] == del_num)
        {
            for(j=i; j<(num-1); j++)
            {
                arr[j] = arr[j+1];
            }

            break;
        }
    }

    /* Print array after deleting value */
    printf("Array after deleting element: ");
    for(i=0; i<(num-1); i++)
    {
        printf("%d\t", arr[i]);
    }

    free(arr);

    return 0;
}
