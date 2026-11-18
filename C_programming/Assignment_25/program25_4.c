///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSmall
//  Description   : Accept a character from user and check weather it is Small case character or not  
//  Input         : P
//  Output        : It is not small case character  
//  Input         : a
//  Output        : It is small case character 
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch>='a' && ch<='z')
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

    bret=ChkSmall(cValue);

    if(bret==TRUE)
    {
        printf("It is Small Case character");
    }
    else
    {
       printf("It is Not Small Case Character"); 
    }

    return EXIT_SUCCESS;
}
