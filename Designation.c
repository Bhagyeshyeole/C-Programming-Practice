//Program to show Designation of Employee in given company.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char code;
    printf("Designation character \n");
    printf("\n Manager = m ");
    printf("\n Supervisior = s");
    printf("\n Clerk = c ");
    printf("\n Worker = w ");

    printf("\n Enter the designation code: ");
    scanf(" %c", &code);

    if(code=='m')
    {
        printf("\n Manager");
    }
    else if(code=='s')
    {
        printf("\n Supervisior");
    }
    else if(code=='c')
    {
        printf("\n Clerk");
    }
    else if(code=='w')
    {
        printf("\n Worker");
    }
    else
    {
        printf("\n Invalid designation Chracter");
    }
    return 0;
}   
