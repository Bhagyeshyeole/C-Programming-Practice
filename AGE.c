#include<stdio.h>
#include<conio.h>
main()
{
int a1,a2,a3;
printf("ENTER AGES OF THREE PERSON:\n");
scanf("%d%d%d",&a1,&a2,&a3);

if(a1>a2 && a1>a3)
printf("1st person is elder\n"); 
else
if (a2>a1 && a2>a3)
printf("2nd person is elder\n");
else
if (a3>a1 && a3>a2)
printf("3rd person is elder\n");
else
if (a1==a2 && a2==a3)
printf("ALL ARE OF SAME AGES\n");
getch();
}