
#include<stdio.h>
int main()
{

    int row, col, n;
    printf("Enter N = ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
          printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            if(row ==1 || row ==n || col ==1 || col ==2*row-1)
            {
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
