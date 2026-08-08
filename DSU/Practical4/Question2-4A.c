//Write a C Program to Search an Element in a Descending Order Array.
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int key;
    int low, high, mid;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found)
        printf("Element found at position %d", mid + 1);
    else
        printf("Element not found");
}
