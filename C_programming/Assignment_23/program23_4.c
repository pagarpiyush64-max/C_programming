///////////////////////////////////////////////////////////////////
//
//  Function Name : Displaydigits
//  Description   : Accept a String from user and display only digits
//  Input         : Marvellous987Multi21OS 
//  Output        : 98721 
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Displaydigits(char *str)
{
    while(*str!='\0')
    {
        if(*str>='0' && *str<='9')
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];
    printf("Enter the string:");
    scanf("%[^\n]s",arr);

    Displaydigits(arr);

    return EXIT_SUCCESS;
}