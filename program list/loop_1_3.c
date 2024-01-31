#include<stdio.h>
int main()
{
    int  n, r, npr=0, nf=1, rf=1, nrf=1;

    printf("Enter the value of n : ");
    scanf("%d", &n);


    printf("Enter the value of r : ");
    scanf("%d", &r);

    for(int i=n; i>=1; i--)
    {
        nf = nf * i;

    }
    printf("%d\n", nf);
    for(int i=n-r; i>=1; i--)
    {
        nrf=nrf * i;

    }
     printf("%d\n", nrf);

    for(int i=r; i>=1; i--)
    {
        rf=rf*i;

    }
    printf("%d\n", rf);
    npr=nf/(nrf * rf);
    printf("%dC%d= %d", n, r, npr);
   
   return 0;

}
