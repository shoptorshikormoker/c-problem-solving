#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-1; j++)
        {
            printf("%d ",1);
        }
        int temp = 0;
        for (int k = 1; k <= ((2 * i) - 1); k++)
        {
            if (k==1 || k <= ((2 * i )-1))
            {
                printf("%d", ++temp);
    
            }
            else 
            {
                printf("%d",--temp);
            }

        }
        printf("\n");
    }
    return 0;
}