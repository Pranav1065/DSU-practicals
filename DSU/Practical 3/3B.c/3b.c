//Write a Program to search a Particular Data from the Given Array of Strings using the linear search method
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][20];
    char key[20];
    int n, i, found = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    printf("Enter string to search: ");
    scanf("%s", key);

    for(i = 0; i < n; i++)
    {
        if(strcmp(str[i], key) == 0)
        {
            printf("String found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("String not found");
    }

    return 0;
}
