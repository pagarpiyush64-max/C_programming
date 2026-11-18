///////////////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description   : Accept a String from user and display Capital Letter Count in string
//  Input         : Marvellous987 Multi21OS 
//  Output        : 4
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCount=0;
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
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

    iRet=CountCapital(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}