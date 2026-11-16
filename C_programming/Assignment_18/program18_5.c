///////////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Description   : Accept 2 number from user and display Patter 
//  Input         : 4   4 
//  Output        : 1   2   3   4   
//                  1   @   @   4
//                  1   @   @   4
//                  1   2   3   4
//  Author        : Piyush Pagar
//  Date          : 9/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    int iNo=0;
    for(i=1;i<=iRow;i++)
    { 
        for(j=1,iNo=1;j<=iCol;j++,iNo++)
        {
            if(j==1||j==iCol||i==1||i==iRow)
            {
                printf("%d\t",iNo);
            }
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1= 0;
    int iValue2= 0;
    printf("Enter Numbers of Rows and Colums:");
    scanf("%d", &iValue1);
    scanf("%d", &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}