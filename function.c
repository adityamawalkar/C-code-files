add()
{
  int a,b;
  clrscr();
  printf("enter the value of a=");
  scanf("%d",&a);
  printf("enter the value of b=");
  scanf("%d",&b);
  printf("sum of  %d and %d is %d",a,b,a+b);
  getch(); 
}

subtract()
{
  int c,d;
  clrscr();
  printf("\nenter two numbers");
  scanf("%d %d",&c,&d);
  printf("\nsubtraction of %d and %d is %d",c,d,c-d);
  getch();
}

multiplication()
{
  int e,f;
  clrscr();
  printf("\nenter two numbers");
  scanf("%d %d",&e,&f);
  printf("\nmultiplication of %d and %d is %d",e,f,e*f);
  getch();
}

division()
{
  int r,g;
  clrscr();
  printf("\nenter two numbers");
  scanf("%d %d",&r,&g);
  printf("\ndivision of %d and %d is %d",r,g,r/g);
  getch();
}

average()
{
  int a[9],i,sum=0;
  float avg;
  clrscr();
  printf("\nenter your marks=");
  for(i=0;i<=8;i++)
     scanf("%d",&a[i]);
  for(i=0;i<=8;i++)
     sum=sum+a[i]; 
  printf("\nsum is %d",sum);
  avg=sum/750.0*100;
  printf("\naverage is %f",avg);
  getch(); 
}

main()
{
  clrscr();
  add();
  subtract();
  multiplication();
  division();
  average();
  getch();
}