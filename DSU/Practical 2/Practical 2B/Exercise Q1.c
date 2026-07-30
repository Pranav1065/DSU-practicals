//Write a C Program to Find Maximum OR Value Produced by Pairwise Elements of an Array.
#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, j;
    int max = 0, orValue;

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
            orValue = arr[i] | arr[j];

            if(orValue > max)
            {
                max = orValue;
            }
        }
    }

    printf("Maximum OR Value = %d", max);

    return 0;
}
