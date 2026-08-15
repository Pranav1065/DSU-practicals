//find the Longest String After Sorting
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][20];
    int n, i;
    int longest = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for(i = 1; i < n; i++)
    {
        if(strlen(str[i]) > strlen(str[longest]))
        {
            longest = i;
        }
    }

    printf("Longest string = %s", str[longest]);

    return 0;
}
