///////////////////////////////////////////////////////////////////
//
//  Function Name : patter
//  Description   : Accept 2 number from user and display Patter 
//  Input         : 4   4 
//  Output        : A   B   C   D
//                  a   b   c   d
//                  A   B   C   D
//                  a   b   c   d
//  Author        : Piyush Pagar
//  Date          : 9/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    char c='\0';
    for(i=1;i<=iRow;i++)
    {
        if(i%2==0)
        {
           c='a'; 
        }
        else
        {
            c='A'; 
        }
        for(j=1;j<=iCol;j++,c++)
        {
            printf("%c\t",c);
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