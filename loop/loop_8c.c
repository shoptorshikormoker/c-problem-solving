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
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            for (int l = n - 1; l <= 1; l++)
            {
                for (int m = n - l; m <= 1; m++)
                {
                    printf(" ");
                }
                for (int n = (2 * l) - 1; n <= 1; n++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
    }

    return 0;
}