#include<stdio.h>
  #include<conio.h>
   int main ()
   {
   int n,rem=0,sum =0;
    printf("Enter any number:\n");
    scanf("%d",&n);
  while(n>0)
  {

      rem=n%10;

      n=n/10;
sum=rem+sum;

  }

     printf("%d",sum);
         return 0;
   }
