#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill=0.0f;
    if(iUnits<=100)
    {
        fBill=iUnits*5;
        printf("%f\n",fBill);
    }
    else if(iUnits>100 && iUnits<200)
    {
        fBill=iUnits*7;
        printf("%f\n",fBill);
    }
    else
    {
       fBill=iUnits*10;
        printf("%f\n",fBill); 
    }
}

int main()
{
    int iUnits=0;
  
    printf("Enter the Age");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);


    return EXIT_SUCCESS;
}