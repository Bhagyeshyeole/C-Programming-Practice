//Program to Calculate Factorial of given number.
#include<stdio.h>
int main()
{
    int no,i=1,fact=1;

    printf("Enter any number : ");
    scanf("%d",&no);
    
        while(i <= no)
        {
            fact = fact * i;
            i++;
        }
        printf("\n Factorial: %d\n",fact);

    return 0;
}
