///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Description   : Accept a Character from user and check weather it is special or not
//  Input         : !
//  Output        : it is Special character 
//  Input         : 5
//  Output        : it is Not Special character
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='&' || ch=='*' || ch=='^')
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue='\0';
    bool bret=false;

    printf("Enter the charcter:");
    scanf("%c",&cValue);

    bret=ChkSpecial(cValue);

    if(bret==true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not special character");        
    }

    return EXIT_SUCCESS;
}
