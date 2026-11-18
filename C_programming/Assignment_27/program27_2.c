///////////////////////////////////////////////////////////////////
//
//  Function Name : CountSmall
//  Description   : Accept a String from user and display Small Letter Count in string
//  Input         : Marvellous 
//  Output        : 9
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCount=0;
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
           iCount++;
        }
        str++;
    }   
    return iCount;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter the string:");
    scanf("%[^\n]s",arr);

    iRet=CountSmall(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}