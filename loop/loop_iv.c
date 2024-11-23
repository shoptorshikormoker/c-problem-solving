#include<stdio.h>
int main()
{
    int n, result=0;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    { 
        int temresult=0;
        for (int j = 1; j <= i; j++)
        {
            temresult=temresult+j;
        }
    result=result+temresult;
    } 
    printf("result =%d",result);
    return 0;
}
