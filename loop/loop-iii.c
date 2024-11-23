// 5 – 11 + 17 - … (up to 75 th term )


#include<stdio.h>
int main()
{
    int result=0;
    for (int  i = 5; i <=75; i=i+6)
    {
        if (i%2!=0)
        {
         result=result+i;   
        }
        else{
        result=result-i;
        }
    }
    printf("result=%d",result);
    return 0;
}
    
    