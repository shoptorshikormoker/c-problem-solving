#include<stdio.h>
int main()
{
    float bs,hre,me,gs;
    printf("Enter basic salary\n");
    scanf("%f",&bs);
    hre = bs * (30.00/100.00);
    me =bs * (5.00/100.00);
    gs = bs+hre+me;
    printf("Gross salary = %f\n",gs);
    return 0;
}

