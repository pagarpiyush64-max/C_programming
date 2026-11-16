///////////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Description   : Accept a number from user and display Patter 
//  Input         : 5 
//  Output        : #   1   *   #   2   *   #   3   *   #   4   *   #   5   *  
//  Author        : Piyush Pagar
//  Date          : 9/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    { 
        printf("#\t%d\t*\t",iCnt);
    }
}

int main()
{
    int iValue1= 0;
    printf("Enter Numbers of Element:");
    scanf("%d", &iValue1);

    Pattern(iValue1);

    return 0;
}