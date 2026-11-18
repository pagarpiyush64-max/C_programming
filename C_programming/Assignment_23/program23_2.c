///////////////////////////////////////////////////////////////////
//
//  Function Name : Struprx
//  Description   : Accept a String from user and convert it into Upper Case
//  Input         : Marvellous Multi OS 
//  Output        : MARVELLOUS MULTI OS 
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
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

    struprx(arr);

    printf("Modified string is:%s",arr);

    return EXIT_SUCCESS;
}