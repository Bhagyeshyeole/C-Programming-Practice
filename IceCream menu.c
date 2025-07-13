//Program to display an Ice Cream menu and calculate the total cost based on user selection and quantity.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int qty,ic,tot;
    printf("Welcome to the Ice Cream Menu!\n");
    printf("Please select an option:\n");
    printf("1. Vanilla\n");
    printf("2. Chocolate\n");
    printf("3. Strawberry\n");
    printf("4. Mango kulfi\n");
    printf("5. Butterscotch\n");
    printf("6. Mix Fruit\n");
    printf("7. Badam Pista\n");
    printf("8. Exit\n");

    printf("\n\n\n Enter ythe Ice cream number (1-8): ");
    scanf("%d", &ic);

    switch(ic) 
    {
        case 1:
            printf("\n Enter the quantity:");
            scanf("%d", &qty);
            tot = qty * 20;
            printf("Your total is: %d\n", tot);
            break;
        case 2:
            printf("\n Enter the quantity:");
            scanf("%d", &qty);
            tot = qty * 25;
            printf("Your total is: %d\n", tot);
            break;  
        case 3:
            printf("\n Enter the quantity:");
            scanf("%d", &qty);
            tot = qty * 30;
            printf("Your total is: %d\n", tot);
            break;
        case 4: 
            printf("\n Enter the quantity:");
            scanf("%d", &qty);
            tot = qty * 35;
            printf("Your total is: %d\n", tot);
            break;
        case 5:                 
            printf("\n Enter the quantity:");
            scanf("%d", &qty);
            tot = qty * 40;
            printf("Your total is: %d\n", tot);
            break;
        case 6:
            printf("\n Enter the quantity:");
            scanf("%d", &qty);
            tot = qty * 45;
            printf("Your total is: %d\n", tot);
            break;
        case 7: 
            printf("\n Enter the quantity:");
            scanf("%d", &qty);
            tot = qty * 50;
            printf("Your total is: %d\n", tot);
            break;
        default:
            printf("\n Exit the menu. Thank you!\n");
    }
    return 0;
}   



        
