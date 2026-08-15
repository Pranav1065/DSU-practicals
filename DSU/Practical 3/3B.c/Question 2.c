//Count occurrences of a given string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][20];
    char key[20];
    int n, i, count = 0;

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
            count++;
        }
    }

    printf("Number of occurrences = %d", count);

    return 0;
}
