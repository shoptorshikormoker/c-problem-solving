/*
 Write a program in C to make a pyramid pattern with numbers increased by 1.
   1
  2 3
 4 5 6
7 8 9 10
*/
#include<stdio.h>
int main()
{
    int i, j, row, col, n, a=1, s;
    printf("Enter number = ");
    scanf("%d", &n);

    for(row=1; row<=n; row=row+1)
    {
        for(s=1; s<=n-row; s++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
           printf("%d ", a++);
        }
        printf("\n");
    }
    return 0;
}

