#include<stdio.h>
#include<stdlib.h>

void CalculateBonue(float fSalary,int iYears)
{
    float fBonus=0.0f;
    if(iYears<5)
    { 
        fBonus=(fSalary*5)/100;
        printf("%f\n",fBonus);
    }
    else if(iYears>=5 || iYears<10)
    {
        fBonus=(fSalary*10)/100;
        printf("%f\n",fBonus);
    }
    else
    {
        fBonus=(fSalary*15)/100;
        printf("%f\n",fBonus); 
    }
}

int main()
{
    float fSalary=0.0f;
    int iYears=0;
  
    printf("Enter Salary and Years of service:");
    scanf("%f%d",&fSalary,&iYears);

    CalculateBonue(fSalary,iYears);


    return EXIT_SUCCESS;
}