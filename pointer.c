#include<stdio.h>
int main()
{
    int x=6 ;
    int* py=&x;
    *py= *py+1;
    printf(" value of x = %d\n",x);
    printf(" value  of y = %d\n",*py);
    }
