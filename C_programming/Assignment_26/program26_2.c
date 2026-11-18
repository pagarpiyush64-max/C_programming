///////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept a Character from user and display its Corrosponding character
//  Input         : a
//  Output        : A
//  Input         : 5
//  Output        : 5
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        printf("%c",ch+32);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c",ch-32);
    }
    else
    {
        printf("%c",ch);
    }

}

int main()
{
    char cValue='\0';

    printf("Enter the charcter:");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
