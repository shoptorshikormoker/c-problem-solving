#include<stdio.h>
int main()
{
    int C,D,A;
    printf("Enter the value of C and D\n");
    scanf("%d %d",&C,&D);
    A=C;
    C=D;
    D=A;
    printf("value of C is %d and value of D is %d",C,D);
    return 0;
}
