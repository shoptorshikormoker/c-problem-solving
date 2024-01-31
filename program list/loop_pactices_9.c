/*
 Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.

The pattern like :
 1
 22
 333
 4444
 */
#include<stdio.h>
int main()
{
    int i, j, row, col, n;
    printf("Enter number = ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
           printf("%d",row);
        }
        printf("\n");
    }
    return 0;
}
