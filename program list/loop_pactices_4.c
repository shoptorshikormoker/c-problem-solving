/*
Write a program in C to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/
#include<stdio.h>
int main()
{
    int i,n,result;
    printf("Input the number :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        result = n*i;
        printf("%d x %d = %d\n" , n, i, result);
    }
    return 0;
}
