/*
Write a C program to display the sum of n terms of even natural numbers.
Test Data :
Input number of terms : 5
Expected Output :
The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30


*/
#include<stdio.h>
int main()

{
   int i,n,sum=0;
   printf("Input number of terms : ");
   scanf("%d", &n);
   printf("The even numbers are :");
   for(i=2;i<=n;i=i+2)
   {
       printf("%d ",i);
        sum = sum + i;
   }
   printf("\nThe Sum of even Natural Number upto 5 terms : %d\n", sum);


 return 0;
}
