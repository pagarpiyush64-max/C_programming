///////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept a Character from user and Display its decimal,octaland hexadecimal format.
//  Input         : A
//  Output        : 65  101 41
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("%c %d\t",ch,ch);
    printf("%o\t",ch);
    printf("%x",ch);
}

int main()
{
    char cValue='\0';

    printf("Enter the charcter:");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
