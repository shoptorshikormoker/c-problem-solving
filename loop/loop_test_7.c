#include <stdio.h>
int main()
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n-1; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= n; k++)
            {
                if( k==1 || i==1 || i==n || k==n){
        
                printf("*");
                }
                else{
                    printf(" ");
                }
            
            }
            printf("\n");
        }
        return 0;
    }