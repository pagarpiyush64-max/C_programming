#include<stdio.h>
#include<stdlib.h>

int main()
{

    char Arr[30];

    printf("enter name : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is %s",Arr);



    return EXIT_SUCCESS;
}