#include<stdio.h>
int main(){
    int mul=1;
    for (int i = 2; i <=37; i=i+5)
    {
        mul = mul *i;
    }
    printf("mul = %d",mul);
    return 0;
}