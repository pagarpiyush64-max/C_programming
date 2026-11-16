///////////////////////////////////////////////////////////////////
//
//  Function Name : patter
//  Description   : Accept 2 number from user and display Patter 
//  Input         : 3   4 
//  Output        : A   B   C   D
//                  B   B   B   B
//                  C   C   C   C
//  Author        : Piyush Pagar
//  Date          : 9/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    int iNo=1;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++,iNo++)
        {
            printf("%d\t",iNo);
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

    Patter(iValue1,iValue2);

    return 0;
}