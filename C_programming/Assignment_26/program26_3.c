///////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept a Character from user if character is capital display till Z and character is small then display till a
//  Input         : U
//  Output        : U V W X Y Z
//  Input         : e
//  Output        : e d c b a 
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
        while(ch<='Z')
        {
            printf("%c",ch);
            ch++;
        }
    }
    else if(ch>='a' && ch<='z')
    {
        while(ch>='a')
        {
            printf("%c",ch);
            ch--;
        }
    }
    else
    {
        printf("%c is invalid input",ch);
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
