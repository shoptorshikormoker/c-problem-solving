#include<stdio.h>
int main()
{
    float km, cm, mm, m;
    printf("Enter distance in kelometer\n");
    scanf("%f",&km);
    m =km * 1000.0;
    cm =km *100000.0;
    mm =km *1000000.0;
    printf("Distance in Meter is %f\n",m);
    printf("Distance in Centimeter is %f\n",cm);
    printf("Distance in millimeter is %f\n",mm);
    return 0;

}

