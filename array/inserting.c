#include<stdio.h>
int main()
{
    int el,pos,index,arr[100];
    printf("Enter your element: ");
    scanf("%d",&el);
    printf("Enter position where to insert: ");
    scanf("%d",&pos);
    index = el;
    printf("The element in arr at position %d = %d",pos,arr[index]);
    return 0;
}
