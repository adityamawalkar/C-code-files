#include <conio.h>
#include <stdio.h>

//Compiler version gcc  6.3.0

 main()
{
  
  void add(void);
  clrscr();
  add();
  average();
  getch();
}

void average()
{
  int a[9],i,sum=0;
  float avg;
  clrscr();
  printf("enter your marks");
  for(i=0;i<=8;i++)
   scanf("%d",&a[i]);
  sum=sum+a[i];
  avg=sum/9.0;
  printf("average is %d",avg);
  getch(); 
}

void add()
{
  int k,b[18],sum=0;
  clrscr();
  printf("enter the numbers");
  for(k=0;k<=17;k++)
     scanf("%d",&b[k]);
  sum=sum+b[k];
  printf("sum is %d",sum);
  getch();
}