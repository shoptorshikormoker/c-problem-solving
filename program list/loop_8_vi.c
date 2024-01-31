#include<stdio.h>
int main()
{

    int row, col, n, a;
    printf("Enter N = ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        a=1;
        for(col=1; col<=n; col++)
        {
           if(row==1 || row==n || col<=1 || col==n){
                    if(col<=(n/2) && (row==1 || row==n)){
                        printf("%d", a++);
                    }
                    else if(row==1 || row==n){
                       printf("%d", a--);
                    }
                    else{
                        printf("%d", a);
                    }

            }

            else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
