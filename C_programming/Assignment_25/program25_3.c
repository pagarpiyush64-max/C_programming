///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkDigit
//  Description   : Accept a character from user and check weather it is Digit or not  
//  Input         : 9
//  Output        : It is Digit 
//  Input         : a
//  Output        : It is not Digit 
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch>='0' && ch<='9')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bret=FALSE;

    printf("Enter the character");
    scanf("%c",&cValue);

    bret=ChkDigit(cValue);

    if(bret==TRUE)
    {
        printf("It is Digit");
    }
    else
    {
       printf("It is Not Digit"); 
    }

    return EXIT_SUCCESS;
}
