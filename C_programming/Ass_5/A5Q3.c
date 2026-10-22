#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(float fAmount)
{
    float fDiscount=0.0f;
    float fFinalamount=0.0f;
    if(fAmount<1000)
    { 
        printf("%f\n",fAmount);
    }
    else if(fAmount>=1000 || fAmount<5000)
    {
        fDiscount=(fAmount*10)/100;
        fFinalamount=fAmount-fDiscount;
        printf("%f\n",fFinalamount);
    }
    else
    {
        fDiscount=(fAmount*20)/100;
        fFinalamount=fAmount-fDiscount;
        printf("%f\n",fFinalamount); 
    }
}

int main()
{
    float fAmount=0.0f;
  
    printf("Enter Purchase Amount:");
    scanf("%f",&fAmount);

    CalculateElectricityBill(fAmount);


    return EXIT_SUCCESS;
}