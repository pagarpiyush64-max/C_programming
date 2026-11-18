///////////////////////////////////////////////////////////////////
//
//  Function Name : Strlwrx
//  Description   : Accept a String from user and convert it into Lower Case
//  Input         : Marvellous Multi OS 
//  Output        : marvellous multi os 
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        str++;
    }
}

int main()
{
    char arr[20];
    printf("Enter the string:");
    scanf("%[^\n]s",arr);

    strlwrx(arr);

    printf("Modified string is:%s",arr);

    return EXIT_SUCCESS;
}