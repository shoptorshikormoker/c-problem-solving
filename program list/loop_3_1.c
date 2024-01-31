//3 + 11 + 19 + … + 1691 find the sum
#include<stdio.h>
int main()

{
   int i,sum=0;
   for(i=3;i<=1691;i=i+8)
   {
       sum = sum+i;
   }
    printf("sum = %d\n", sum);




 return 0;
}

