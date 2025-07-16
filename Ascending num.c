//Program to print ascending numbers from 1 to n.
#include <stdio.h>
int main()
 {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Enter a positive integer.\n");
        return 1;
    }

    printf("Ascending numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    
    printf("\n"); 
    return 0;
}
