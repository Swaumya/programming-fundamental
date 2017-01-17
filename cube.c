#include<stdio.h>
     void cube (int a);
     int main()

       {
        int a;
           printf("Enter any number :\n");
           scanf("%d",&a);

          cube(a);
          return 0;
         }
        void cube(int a)
        {
           int cube;
          
           cube=a*a*a;
           printf(" The cube of number is %d,",cube);
      
     }

