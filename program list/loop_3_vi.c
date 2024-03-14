#include<stdio.h>
int main()
{
    int i,ml=1;
    for(i=2; i<=37; i+=5)
    {
        ml=ml*i;
    }
    printf("%d",ml);
}
