///////////////////////////////////////////////////////////////////
//
//  Function Name : pattern
//  Description   : Accept a number from user and display Patter 
//  Input         : 5 
//  Output        : A   B   C   D   E  
//  Author        : Piyush Pagar
//  Date          : 9/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    char ch='\0';
    for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
    { 
        printf("%c\t",ch);
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