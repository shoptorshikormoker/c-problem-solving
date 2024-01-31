/*
Write a program to print out all Armstrong numbers between 1 and
10000. If sum of cubes of each digit of the number is equal to the number
itself, then the number is called an Armstrong number. For example, 153 =
(1*1*1) + (5*5*5) + (3*3*3).
*/
#include<stdio.h>
int main()
{
    for(int i=1; i<=10000; i++){
        int  r, result=0;
        int temp=i;
        while(temp!=0)
        {
            r=temp%10;
            temp=temp/10;
            result=result+(r*r*r);
        }
        if(result==i){
            printf("%d\n", i);
        }

    }

    return 0;
}
