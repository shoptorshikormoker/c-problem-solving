//7 + 20 + 33 + … ( up to 100 th term )
#include<stdio.h>
int main()

{
   int i,sum=0,previousNum=7;
   for(i=1;i<=100;i++)
   {
       sum = sum + previousNum;
       previousNum = previousNum+13;
   }
    printf("sum = %d\n", sum);




 return 0;
}

