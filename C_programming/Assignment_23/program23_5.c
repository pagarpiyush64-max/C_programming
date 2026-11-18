///////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Description   : Accept a String from user and display White spaces in string
//  Input         : Marvellous987 Multi21OS 
//  Output        : 1
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount=0;
    while(*str!='\0')
    {
        if(*str==' ')
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

    iRet=CountWhite(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}