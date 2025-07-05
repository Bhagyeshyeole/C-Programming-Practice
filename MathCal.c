//Program to calculate add,sub,mul,div of two numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
 int no1,no2,add,sub,mul,div;
   printf("Enter any two numbers \n");
   scanf("%d%d",&no1,&no2);

       add=no1+no2;
       sub=no1-no2;
       mul=no1*no2;
       div=no1/no2;

   printf("addition=%d \n",add);
   printf("substraction=%d \n",sub);
   printf("multiplication=%d \n",mul);
   printf("division=%d \n",div);

 getch();
}
