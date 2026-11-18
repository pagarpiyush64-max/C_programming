///////////////////////////////////////////////////////////////////
//
//  Function Name : Chkvowel
//  Description   : Accept a String from user and check weather vowel are available or not  
//  Input         : marvellous
//  Output        : Contains Vowels  
//  Input         : ctyw
//  Output        : Not Contains Vowel
//  Author        : Piyush Pagar
//  Date          : 15/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    int i=0,j=0;
    char temp;
    while(str[i]!='\0')
    {
        i++;
    }
    i--;
    while(i>j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i--;
        j++;
    }
}

int main()
{
    char arr[20];

    printf("Enter the String");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    printf("%s",arr); 


    return EXIT_SUCCESS;
}
