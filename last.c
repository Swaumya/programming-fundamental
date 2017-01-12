#include<stdio.h>
  #include<conio.h>
   int main ()
   {
   int n,rem=0,last;
    printf("Enter any number:\n");
    scanf("%d",&n);
    last=n % 10;
     while(n>0)
     {
     rem=n%10;
     n=n/10;
     }

     printf("The last digit %d\n",last);
     printf("The first digit %d",rem);
         return 0;
   }
