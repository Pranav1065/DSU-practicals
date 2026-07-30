//Find Maximum AND Value Produced by Pairwise Elements of an Array
#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, j;
    int max = 0, andValue;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            andValue = arr[i] & arr[j];

            if(andValue > max)
            {
                max = andValue;
            }
        }
    }

    printf("Maximum AND Value = %d", max);

    return 0;
}
