#include<stdio.h>
int main(){
    int n, sum=0;
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        int innersum = 0;
        for (int j = 1; j<=i; j++)
        {
            int sq = j*j;
          int  fact=1;
          for (int k = 1; k<=j; k++)
          {
            fact = fact * k;
          }
          int div = sq/fact;
          innersum =innersum + div;
          
        }
        sum = sum + innersum;
    }
    printf("sum = %d",sum);
    return 0;
    
}
