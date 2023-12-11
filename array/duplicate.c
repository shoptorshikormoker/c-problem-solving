#include<stdio.h>
int arr[100];
int main()
{
    int n,i,j,d;
    printf("Enter your value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n value :");
    for (i=0;i<n;i++)
    {
        d=0;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])d++;

        }
        if (d==0)
            printf("\n%d",arr[i]);
    }
    return 0;
}

