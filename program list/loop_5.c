#include<stdio.h>
int main()
{
    int row, col,n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++){
            printf("%d\t", row*col);
        }

        printf("\n");
    }
}
