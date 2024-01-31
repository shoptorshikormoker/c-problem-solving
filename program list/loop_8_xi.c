
#include<stdio.h>
int main()
{

    int row, col, n, a;
    printf("Enter N = ");
    scanf("%d", &n);
     for(row=n; row>1; row--)
    {
        a=1;
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            if(col<row){
                printf("%d", a++);
            }
            else{
                printf("%d", a--);
            }

        }
        printf("\n");
    }
    for(row=1; row<=n; row++)
    {
        a=1;
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            if(col<row){
                printf("%d", a++);
            }
            else{
                printf("%d", a--);
            }
        }
        printf("\n");
    }

    return 0;
}

