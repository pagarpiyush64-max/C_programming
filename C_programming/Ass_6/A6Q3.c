#include<stdio.h>
#include<stdlib.h>

void Displaygrade(float fMarks)
{
    
    if(fMarks>=90 && fMarks<=100)
    { 
        printf(" A ");
    }
    else if(fMarks>=75 && fMarks<=89)
    {
        printf(" B ");
    }
    else if(fMarks>=60 && fMarks<=74)
    {
         printf(" C ");
    }
    else if(fMarks>=40 && fMarks<=59)
    {
         printf(" D ");
    }
    else 
    {
         printf(" Fail ");
    }
}

int main()
{
    float fMarks=0.0f;
  
    printf("Enter the marks to find grade:");
    scanf("%f",&fMarks);

    Displaygrade(fMarks);


    return EXIT_SUCCESS;
}