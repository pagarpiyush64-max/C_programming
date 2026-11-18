///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkCapital
//  Description   : Accept a character from user and check weather it is Capital or not  
//  Input         : P
//  Output        : It is capital character 
//  Input         : a
//  Output        : It is not capital character 
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch>='A' && ch<='Z')
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

    bret=ChkCapital(cValue);

    if(bret==TRUE)
    {
        printf("It is Caital character");
    }
    else
    {
       printf("It is Not Capital Character"); 
    }

    return EXIT_SUCCESS;
}
