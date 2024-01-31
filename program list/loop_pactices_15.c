/*
 Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

   1
  2 2
 3 3 3
4 4 4 4
*/
#include<stdio.h>
int main()
{
    int i,j, row,col,n;
    printf("Enter number = ");
    scanf("%d", &n);


    for(row=1;row<=4;row=row+1)
    {


        printf(" ");

        for(col=1;col<=row;col++)
        {

           printf(" %d ",row);
        }
        printf("\n");
        printf("");


    }

}
