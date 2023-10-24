

//Compiler version gcc  6.3.0

/*
#include <stdio.h> 
main() 
{
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)      //logic
   {
      if (n % i == 0)
      {
         c++;
      }
   }
     if (c == 2) 
       {
         printf("%d is a Prime number",n);
       }
     else 
       {
         printf("%d is not a Prime number",n);
       }
  return 0;    
}
*/
 
#include <stdio.h>
main()
{
  int a,b;
  printf("enter a number =\t");
  scanf("%d",&a);
  for(b=2 ; b<=a-1 ; b++)
     if(a%b==0)
        break;
  if(b==a)
    printf("%d is a prime number",a);
  else
    printf("%d is not a prime number",a);
}


// print all prime number between 2 numbers 

/* #include <stdio.h>
main()
{
  int a,b,x,y;
  printf("enter two numbers =\t");
  scanf("%d%d",&a,&b);
  for(x=a+1 ; x<=b-1 ; x++)
     {
       for(y=2 ; y<x ; y++)
           if(x%y==0)
              break;
       if(y==x)
          printf("%d ",x);
     }
   getch();
}  
*/
  