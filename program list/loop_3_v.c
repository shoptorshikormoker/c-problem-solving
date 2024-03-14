#include<stdio.h>
int main()
{
    int i, n, j, sum;
    printf("Enter a number: ");
    scanf("%d",& n);
    for(i=1; i<=n; i++)
    {
      int f=1;
      int sq=i*i;
      for(j=i; j>=1; j--)
      {
          f=f*j;
      }
      sum=sum+(sq/f);
    }

    printf("%d",sum);
}
