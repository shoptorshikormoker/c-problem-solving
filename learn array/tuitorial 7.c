#include<stdio.h>
int main()
{
    int a[3],sum=0,i;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    for(i=0; i<3; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is : %d\n",sum);
}
