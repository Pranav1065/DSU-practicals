//C Program to Toggle a Bit
#include <stdio.h>

int main()
{
    int num, n;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &n);

    num = num ^ (1 << (n - 1));

    printf("Number after toggling = %d", num);

    return 0;
}
