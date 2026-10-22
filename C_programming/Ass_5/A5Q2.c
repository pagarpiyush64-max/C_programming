#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int iAge)
{
    if( fMarks>=60 && iAge>=17 )
    {
        printf("Eligible for Admission");
    }
    else
    {
       printf("Not Eligible for Admission");
    }
}

int main()
{
    float fMarks=0.0f;
    int iAge=0;
  
    printf("Enter the Marks and Age");
    scanf("%f%d",&fMarks,&iAge);

    CheckAdmission(fMarks,iAge);


    return EXIT_SUCCESS;
}