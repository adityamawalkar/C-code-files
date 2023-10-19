#include <stdio.h>

//Compiler version gcc  6.3.0

main()
{
  int choice,a,b,c,d[9],i,sum=0 ;
  float avg;
  while(1)
  {
  clrscr();
  printf("\n1. ADDITION");
  printf("\n2. SUBTRACTION");
  printf("\n3. EVEN NUMBER OR ODD NUMBER");
  printf("\n4. MULTIPLICATION");
  printf("\n5. DIVISION");
  printf("\n6. AVERAGE");
  printf("\n7. TURN OFF");
  
  printf("\n\nenter your choice = ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
         printf("\nenter two numbers ");
         scanf("%d%d",&a,&b);
         c=a+b;
         printf("\nsum  is %d\n",c);
         break;
    case 2:
         printf("\nenter two numbers ");
         scanf("%d%d",&a,&b);
         c=a-b;
         printf("\nsubstraction is %d\n",c);
         break;
    case 3:
         printf("\nenter a number");
         scanf("%d",&a);
         if(a/2==0)
            printf("\nEven number\n");
         else 
            printf("\nOdd number\n");
         break;
    case 4:
         printf("\nenter two numbers");
         scanf("%d %d",&a,&b);
         c=a*b;
         printf("\nmultiplication is %d\n",c);
         break;
    case 5:
         printf("\nenter two numbers");
         scanf("%d %d",&a,&b);
         c=a/b;
         printf("\n division is %d\n",c);
         break;   
    case 6:
         printf("\nenter your marks=");
         for(i=0;i<=8;i++)
            scanf("%d",&d[i]);
         for(i=0;i<=8;i++)
            sum=sum+d[i]; 
         printf("\nsum is %d",sum);
         avg=sum/750.0*100;
         printf("\naverage is %f",avg);
         break; 
  
    case 7:exit(0);
    default:
         printf("\nTURN OFF😊😊");   
         printf("\t😊☺");
   }
  }
  getch();
}