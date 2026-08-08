//Write a C Program to Search an Element in a Descending Order Array.
#include <stdio.h>

int arr[100], n, key;
int found = 0;

void binarySearch(int low, int high)
{
    int mid;

    if(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
        }
        else if(key < arr[mid])
        {
            binarySearch(low, mid - 1);
        }
        else
        {
            binarySearch(mid + 1, high);
        }
    }
}

int main()
{
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    binarySearch(0, n - 1);

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
