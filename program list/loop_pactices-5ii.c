#include<stdio.h>
int main()
{
    int n,j,result;
    n=10;
    printf("%d",n);
    for(j=1;j<=8;j++)
    {
        result = j*n;
        printf("%d x %d = %d\n" , j, n, result);
    }
    return 0;
}
