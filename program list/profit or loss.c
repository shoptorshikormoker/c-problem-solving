
#include<stdio.h>
int main(){

   float costPrice,sellingPrice,profit,loss;
   //input cost price and selling price
   printf("Enter the costprice:");
    scanf("%f",&costPrice);
        printf("Enter the selling price:");
        scanf("%f",&sellingPrice);
        //calculate profit or loss
        if(sellingPrice>costPrice){
            profit=sellingPrice -costPrice;
            printf("Profit:%.2\n",profit);
        }else if(costPrice>sellingPrice){
            loss=costPrice -sellingPrice;
            printf("Loss:%.2f\n",loss);
        }else{
            printf("No profit,no loss.\n");
        }
        return 0;



        }

