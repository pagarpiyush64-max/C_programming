///////////////////////////////////////////////////////////////////
//
//  Function Name : Strtogglex
//  Description   : Accept a String from user and convert it into Toggle Case
//  Input         : Marvellous Multi OS 
//  Output        : mARVELLOUS mULTI os 
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void strtogglex(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        else if(*str>='a' && *str<='z')
        {
           *str=*str-32; 
        }
        str++;
    }
}

int main()
{
    char arr[20];
    printf("Enter the string:");
    scanf("%[^\n]s",arr);

    strtogglex(arr);

    printf("Modified string is:%s",arr);

    return EXIT_SUCCESS;
}