///////////////////////////////////////////////////////////////////
//
//  Function Name : Differance
//  Description   : Accept a String from user and display Differance between small and capital character in string
//  Input         : MarvellouS 
//  Output        : 6
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Differance(char *str)
{
    int iSCount=0;
    int iCCount=0;
    int iDCount=0;
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
           iCCount++;
        }
        else if(*str>='a' && *str<='z')
        {
           iSCount++;
        }

        str++;
    }   
    return iDCount=iSCount-iCCount;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter the string:");
    scanf("%[^\n]s",arr);

    iRet=Differance(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}