//Write a 'C' Program to Sort an Array of Strings using Bubble Sort Method
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][20], temp[20];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    // Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    printf("\nStrings in alphabetical order:\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
