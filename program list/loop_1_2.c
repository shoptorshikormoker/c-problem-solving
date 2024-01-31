#include<stdio.h>
int main()
{
    int  n, result=1;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--)
    {
        result=result*i;

    }
    printf("%d! = %d", n, result);
}

