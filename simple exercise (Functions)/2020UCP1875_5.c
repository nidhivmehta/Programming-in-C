#include<stdio.h>

float lossProfit(float cp, float sp)
{
	if (sp > cp)   //here we get profit on selling item
    {
        //calculate profit via selling price - cost price
        float profit = sp - cp;
        printf("profit by selling item");
        	return profit;

    }

    else if (sp < cp)   //here we get loss on selling item
    {
        //calculate loss via cost price - selling price
        float loss = cp - sp;
        printf("loss on selling item");
        	return loss;
    }

    else    //here we don't get any loss and profit on selling item when (cost price == selling price)
    {
       return 0;
    }
    
}
int main()
{
    float cost_price, selling_price, profit, loss;

    printf("Enter the cost price of an item: ");
    scanf("%f", &cost_price);

    printf("Enter the selling price of an item: ");
    scanf("%f", &selling_price);
    
    printf(": %.2f ", lossProfit(cost_price, selling_price));

}
