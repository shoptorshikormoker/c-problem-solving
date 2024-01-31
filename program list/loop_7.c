/*
 Write a program to find first n Fibonacci number where n is the input
from user
*/
#include<stdio.h>
int main()
{
    int n,result;
    printf("Input the number : ");
    scanf("%d",&n);
    result = n*(n-1)*(n-2)*(n-3);
    printf(" The Factorial of %d",result);

}

