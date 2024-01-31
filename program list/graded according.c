#include<stdio.h>
int main()
{
    float hard,carbon,tensile;
    printf("Enter hardness of steel :");
    scanf("%f", &hard);
    printf("Enter carbon content :");
    scanf("%f", &carbon);
    printf("Enter Tensile strength : :");
    scanf("%f", &tensile);
    if(hard >60 && carbon < 0.7 && tensile > 5000)
    {
        printf("Grade 10\n");
        exit(0);
            }
        if(hard >60 && carbon < 0.7 && tensile <= 5000)
    {
        printf("Grade 9\n");
        exit(0);
            }
                if(hard <=60 && carbon < 0.7 && tensile > 5000)
    {
        printf("Grade 8\n");
        exit(0);
            }
                if(hard >60 && carbon >= 0.7 && tensile > 5000)
    {
        printf("Grade 7\n");
        exit(0);
            }
                if(hard ||60 && carbon ||0.7 && tensile > 5000)
    {
        printf("Grade 6\n");
        exit(0);
            }
                if(hard || 60 && carbon || 0.7 && tensile || 5000)
    {
        printf("Grade 5\n");
        exit(0);
            }
            return 0;
}
