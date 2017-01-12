#include<stdio.h>
  #include<conio.h>
   int main ()
   {
   int n,rem=0,count=0;
    printf("Enter any number:\n");
    scanf("%d",&n);
  while(n>0)
  {

      rem=n%10;

      n=n/10;
      count++;
  }
      printf("%d",count);
         return 0;
   }
