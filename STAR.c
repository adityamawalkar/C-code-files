#include <stdio.h>

//Compiler version gcc  6.3.0

main()
{
    int i,j,k,l;
    //clrscr();
    for(j=1;j<=5;j++)
  {
        for(i=1;i<=5;i++)
        {
          if(i<=j)
              printf(" * ");
          else
              printf("   ");
        }
        printf("\n");
  }

     for(k=1;k<=5;k++)
  {
        for(l=1;l<=5;l++)
        {
          if(l<=k)
              printf("   ");
          else
              printf(" * ");
        }
         printf("\n");
  }

 getch();
}
