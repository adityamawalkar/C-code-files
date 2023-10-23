#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

void  main()
{
  int a, b, c, i ;
  clrscr();
  printf("enter 1st number = ");
  scanf("% d ",&a);
  printf("enter 2nd number = ");
  scanf("%d", &b);
  if (a>b )
       c=b;
  else
       c=a;
  for ( i = c ; i >= 1 ;  i-- )
      {
         if (a % i == 0 && b % i == 0 )
              {
                printf("GDC of two numbers is %d ",i);
                break;  
              }     
      }  
  getch();  
}