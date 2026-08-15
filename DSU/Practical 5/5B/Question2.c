//Sort Strings Without Using strcmp()
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][20], temp[20];
    int n, i, j, k, swap;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            k = 0;

            while(str[j][k] == str[j + 1][k] &&
                  str[j][k] != '\0')
            {
                k++;
            }

            if(str[j][k] > str[j + 1][k])
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    printf("Sorted strings:\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
