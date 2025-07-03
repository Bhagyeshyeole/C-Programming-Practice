#include<stdio.h>
#include<conio.h>
int main()
{
int len,wid,ar,peri;
  printf("Enter the length of rectangle: ");
  scanf("%d%d",&len,&wid);

      ar = len * wid;
      peri = 2 * (len + wid);
  printf("Area of rectangle is: %d\n", ar);
  printf("Perimeter of rectangle is: %d\n", peri);    
 getch();
}