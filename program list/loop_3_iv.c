#include<stdio.h>
int main()
{
    int sum=0,n, i, j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            sum =sum+j;
        }
    }

    printf("%d",sum);
}
