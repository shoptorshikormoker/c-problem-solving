#include<stdio.h>
int main()
{
    int arr[]={10,20,15,45,55},n,i;
    printf("enter index =");
    scanf("%d",&n);
    n=n-1;
    for(i=0;i<5;i++)
    {
        if(i==n)
            continue;
        printf("%d\n",arr[i]);
    }
    return 0;
}
