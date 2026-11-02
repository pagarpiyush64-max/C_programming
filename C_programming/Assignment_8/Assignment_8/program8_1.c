///////////////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Description   : Display Less if number is smaller than 50 , Medium if number is smaller than 100 and large if greater than 100
//  Input         : None
//  Output        : None
//  Author        : Piyush Pagar
//  Date          : 31/10/2026
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>

void Number(int iNo)
{
    if(iNo<0)
    {
        printf("Negative Number");
    }
    else if(iNo<50)
    {
       printf("less Number"); 
    }
    else if(iNo<100)
    {
       printf("Medium Number"); 
    }
    else
    {
        printf("large Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}