///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description   : Accept a character from user and check weather it is alphabet or not  
//  Input         : P
//  Output        : It is character 
//  Input         : ()
//  Output        : It is not character 
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
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

    bret=ChkAlpha(cValue);

    if(bret==TRUE)
    {
        printf("It is character");
    }
    else
    {
       printf("It is Not Character"); 
    }

    return EXIT_SUCCESS;
}
