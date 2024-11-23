#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        int temp = 0;
        for (int k = 1; k <= ((2 * i) - 1); k++)
        {
            if (k <= (((2 * i) - 1) / 2) + 1)
            {
                printf("%d", ++temp);
            }
            else
            {
                printf("%d", --temp);
            }
        }
        printf("\n");
    }
    return 0;
}