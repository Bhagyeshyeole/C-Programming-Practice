//Program to show given number in Spell form.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no;
    printf("Enter a number 1-10 \n");
    scanf("%d", &no);
    switch(no)
    {
        case 1:
            printf("ONE \n");
            break;
        case 2:
            printf("TWO \n");
            break;
        case 3:
            printf("THREE \n");
            break;              
        case 4:
            printf("FOUR \n");
            break;
        case 5:
            printf("FIVE \n");
            break;              
        case 6: 
            printf("SIX \n");
            break;          
        case 7: 
            printf("SEVEN \n");
            break;  
        case 8:
            printf("EIGHT \n");
            break;
        case 9:
            printf("NINE \n");
            break;
        case 10:
            printf("TEN \n");
            break;      
        default:
            printf("INVALID NUMBER \n");
            break;
    }
    return 0;
}
