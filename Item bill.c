//Program to display bill of purchased items.
#include <stdio.h>
#include<stdlib.h>
int main()
 {
    int code,qnt,rate,amt;
    float dis,netamt;
    char name[50];

         printf("\n Enter the item code:\n");
         scanf("%d",&code);
    
         printf("\n Enter the item name:");
         scanf("%s",&name);

         printf("\n Enter the quantity and rate:");
         scanf("%d%d",&qnt,&rate);

                  amt=qnt*rate;
                  dis=amt*0.1; 
                  netamt=amt-dis;

        printf("\n Amount: %d",amt);
        printf("\n Discount: %f",dis);
        printf("\n Net Amount: %f",netamt);
     
return 0;
 }
