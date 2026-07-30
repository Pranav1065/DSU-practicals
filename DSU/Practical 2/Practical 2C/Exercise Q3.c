//Write a C Program to Count Even Numbers in an Array.
#include <stdio.h>

int main()
{
    int arr[100], n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if((arr[i] & 1) == 0)
        {
            count++;
        }
    }

    printf("Total Even Numbers = %d", count);

    return 0;
}
