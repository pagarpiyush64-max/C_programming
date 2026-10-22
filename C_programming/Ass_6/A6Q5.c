#include<stdio.h>
#include<stdlib.h>

void CheckCharactertype(char cValue)
{
    if(cValue>='A' && cValue<='Z')
    { 
        printf(" Uppercase Character ");
    }
    else if(cValue>='a' && cValue<='z')
    {
        printf(" lowercase Character");
    }
    else if(cValue>='0' && cValue<='9')
    {
         printf(" Digit ");
    }
    else 
    {
         printf(" Special Character");
    }
}

int main()
{
    char cValue=0;
  
    printf("Enter a Character :");
    scanf("%c",&cValue);

    CheckCharactertype(cValue);


    return EXIT_SUCCESS;
}