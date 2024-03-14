#include<stdio.h>
int main()
{
    int numbers[]={1059, 20, 30, 40};
    numbers[2]=50;
    int i;
    for(i=0; i<4; i++){
     printf("%d\n", numbers[i]);
    }
    printf("\n=======================================\n");
    //defining array size
    int number2[5];
    //inserting element in array
    number2[0]=10;
    number2[1]=20;
    number2[2]=16;
    number2[3]=60;
    number2[4]=90;
    for(i=0; i<5; i++){
     printf("%d\n", number2[i]);
    }
    printf("\n=======================================\n");
    //get the array size or length
    printf("%d\n", sizeof(number2)/sizeof(number2[0]));


    return 0;
}
