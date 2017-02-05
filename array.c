#include<stdio.h>
#include<conio.h>
 int main()
    {
       int array[5]={1,2,3,4,5};
       int i,a,flag;

       printf("enter any number");
       scanf("%d",&a);
         for(i=0;i<5;i++)
         {
           if (a==array[i])
             {
               flag =1;
               break;
             }

         }
          if (flag==1)
          {

            printf("it exist");
          }
      else
      {

          printf("it doesnt");
      }
    return 0;}
