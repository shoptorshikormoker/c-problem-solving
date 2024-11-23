#include<stdio.h>
int main(){
    int n,result =0;
    scanf("%d",&n);
    for (int i = 1; i <=n ; i++)
    {
      int  temresult =0;
        for (int j = 1; j <=(2*i)+1 ; j=j+2)
        {
             temresult=temresult+j;
        }
         result=temresult + result; 
    }         
    printf("result =%d",result);
  return 0;  
}