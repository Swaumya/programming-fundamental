#include<stdio.h>
  #include<conio.h>
   int main ()
   {
   int n,rem=0,mul=1;
    printf("Enter any number:\n");
    scanf("%d",&n);
  while(n>0)
  {

      rem=n%10;

      n=n/10;
mul=rem*mul;

  }

     printf(" the product of digits %d",mul);
         return 0;
   }
