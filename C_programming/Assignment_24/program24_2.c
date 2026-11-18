///////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar
//  Description   : Accept a String from user and accept 1 character return Frequency of Characacter
//  Input         : Marvellous987 Multi21OS
//  Input         : e 
//  Output        : 1
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


int CountChar(char *str,char ch)
{
    int iCount=0;
    while(*str!='\0')
    {
        if(*str==ch)
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
    char cValue;
    int iRet=0;

    printf("Enter the string:");
    scanf("%[^\n]s",arr);

    printf("Enter the Character:");
    scanf(" %c",&cValue);

    iRet=CountChar(arr,cValue);
  
    printf("%d",iRet);

    return EXIT_SUCCESS;
}