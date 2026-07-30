//to check whether nth bit is set or clear
#include <stdio.h>

int main()
{
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &n);

    if(num & (1 << (n - 1)))
    {
        printf("Bit at position %d is SET", n);
    }
    else
    {
        printf("Bit at position %d is CLEAR", n);
    }

    return 0;
}
