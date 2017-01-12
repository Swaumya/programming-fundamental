#include<stdio.h>
#include<conio.h>
int main()
{
 int i=1,n;
 printf("Enter any number:\n");
 scanf("%d",&n);
  while(i<=n)
 {
     if (i%2==0)
     {

      printf("%d\t",i);
     }
i++;

 }
 getch();
 return 0;
}
