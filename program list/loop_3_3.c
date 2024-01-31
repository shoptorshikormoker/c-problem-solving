//5 – 11 + 17 - … (up to 75 th term )

#include<stdio.h>
int main()

{
   int i,result=0,previousNum=5;
   for(i=1;i<=75;i++)

   {
       if(i%2!=0)
       {
         result = result + previousNum;

       }
       else{
            result = result - previousNum;

       }
       previousNum = previousNum+6;
   }
    printf("result = %d\n", result);




 return 0;
}

