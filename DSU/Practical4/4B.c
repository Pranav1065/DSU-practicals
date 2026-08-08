//Write a 'C' Program to Search a Particular Data from the Given Array of Strings using Binary Search Method
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][20], key[20];
    int n, i;
    int low, high, mid;
    int found = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings in alphabetical order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    printf("Enter string to search: ");
    scanf("%s", key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(strcmp(str[mid], key) == 0)
        {
            found = 1;
            break;
        }
        else if(strcmp(key, str[mid]) < 0)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 1)
        printf("String found at position %d", mid + 1);
    else
        printf("String not found");

    return 0;
}
