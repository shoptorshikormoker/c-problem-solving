#include<stdio.h>
int main()
{
    int row, col, n;
    printf("Enter N = ");
    scanf("%d", &n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n-row; col++)
            printf(" ");
            for(col=1; col<=2*row-1; col++)
              printf("*");
               printf(" ");
            printf("\n");
        }
        for(row=n-1; row>=1; row--)
            {
                for(col=n-row; col>=1; col--)
                    printf(" ");

                for(col=2*row-1; col>=1; col--)
                    printf("*");
                    printf("\n");
                }
        return 0;
}
