#include<stdio.h>
int main()
{
    int r,rev=0,num,original;
    printf("Enter a five digit number\n");
    scanf("%d",&num);
    original=num;
    while(num!=0)
 {
     r=num%10;
     rev=rev*10+r;
     num=num/10;

    }
   printf("Reversed number is %d\n",rev);
   if(original==rev)
   {
       printf("original and reversed number are equal\n");

   }
   else{
    printf("original and reversed numbers are not equal\n");
   }
   return 0;
}
