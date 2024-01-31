/*
 Write a C program to calculate the factorial of a given number.
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
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
