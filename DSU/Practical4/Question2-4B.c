//Write a C Program to Implement Recursive Binary Search for Strings.
#include <stdio.h>
#include <string.h>

char str[100][20], key[20];
int found = 0;

void binarySearch(int low, int high)
{
    int mid;

    if(low <= high)
    {
        mid = (low + high) / 2;

        if(strcmp(str[mid], key) == 0)
        {
            printf("String found at position %d", mid + 1);
            found = 1;
        }
        else if(strcmp(key, str[mid]) < 0)
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
    int n, i;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings in alphabetical order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    printf("Enter string to search: ");
    scanf("%s", key);

    binarySearch(0, n - 1);

    if(found == 0)
        printf("String not found");

    return 0;
}
