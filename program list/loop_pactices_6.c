/*
Write a C program to display the n terms of odd natural numbers and their sum.
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100

*/
#include<stdio.h>
int main()

{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d", &n);
   printf("The odd numbers are :");
   for(i=1;i<=n;i=i+2)
   {
       printf("%d ", i);
       sum = sum + i;
   }
   printf("\nThe Sum of odd Natural Number upto 10 terms : %d", sum );


 return 0;
}

