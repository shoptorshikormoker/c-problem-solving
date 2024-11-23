#include<stdio.h>
int main(){
    int n, sq,  result, sum=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sq=i*i;
        int fact=1;
        for(int j=1; j<=i; j++){
            fact = fact*j;
        }
        result = sq/fact;
        sum = sum+result;

    } 
    printf("sum = %d ",sum);
    return 0;
}