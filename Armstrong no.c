//Program to show wheather given number is Armstrong or not.
#include<stdio.h>
int main()
{
    int no,temp,sum=0,rem;
    printf("Enter a number: ");
    scanf("%d",&no);    
    temp = no;
    while(no > 0)
    {
        rem = no % 10;
        no=no/10;
        sum = sum + (rem * rem * rem);
    }
    if(temp == sum)
        printf("No. is an Armstrong number.\n", temp);
    else
        printf("No. is not an Armstrong number.\n", temp);
        return 0;
}
