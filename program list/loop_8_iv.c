
/*
Write a program to show the following triangle/rectangle of ‘*’s or
numbers. Take n as input from user to determine the number of rows of
the structure. (eg: n = 5 )
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
#include<stdio.h>
int main()
{

    int row, col, n;
    printf("Enter N = ");
    scanf("%d", &n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n; col++)
            {
             printf("*");
            }
        printf("\n");
        }
        return 0;
}
