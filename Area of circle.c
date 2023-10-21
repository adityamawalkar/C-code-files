#include <stdio.h>

//Compiler version gcc  6.3.0

main()
{
   int r ;
   float a ;
   clrscr();
   printf("enter the radius = ");
   scanf("%d",&r);
   a=3.14 * r * r ;
   printf("area of circle is %f",a);   
   getch();
}