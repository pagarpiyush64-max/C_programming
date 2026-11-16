///////////////////////////////////////////////////////////////////
//
//  Function Name : patter
//  Description   : Accept 2 number from user and display Patter 
//  Input         : 4   4 
//  Output        : 2   4   6   8
//                  1   3   5   7
//                  2   4   6   8
//                  1   3   5   7
//  Author        : Piyush Pagar
//  Date          : 9/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    for(i=1;i<=iRow;i++)
    { 
        for(j=1;j<=iCol;j++)
        {
            if(i%2!=0)
            {
                printf("%d\t",j*2);
            }
            else
            {
                printf("%d\t",j*2-1); 
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

    Patter(iValue1,iValue2);

    return 0;
}