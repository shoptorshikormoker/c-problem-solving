#include<stdio.h>
int main()
{
    int num[1000];
    int value,i,n;
    printf("How many value you want to take: ");
    scanf("%d",&n);
    printf("Enter your array element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter the value you want to search : ");
    scanf("%d",&value);
    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
        printf("Item is  found");
        return 0;

        }

    }
    printf("Item is not found");
    return 0;
}
