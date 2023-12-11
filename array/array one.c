#include<stdio.h>
int main()
{
    int num[]={10,2,15,20,35,46,65};
    int value,pos=-1,i;
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
