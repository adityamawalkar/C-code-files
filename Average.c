#include <stdio.h>

//Compiler version gcc  6.3.0

 main()
{
  int a[9],i,sum=0;
  float avg;
  clrscr();
  printf("\nenter your marks=");
  for(i=0;i<=9;i++)
     scanf("%d",&a[i]);
  for(i=0;i<=9;i++)
     sum=sum+a[i]; 
  printf("\nsum is %d",sum);
  avg=sum/600.0*100;
  printf("\naverage is %f",avg);
  getch(); 
  
}