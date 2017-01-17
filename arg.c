#include<stdio.h>
# define pi 3.15 
     void circle (int r);
     int main()

       {
       int r;
 printf("Enter radius :\n");
           scanf("%d",&r);

          circle(r);
          return 0;
         }
        void circle(int r)
        {
           int area;
          
           area=pi*r*r;
           printf(" The radius of circle  is %d,",area);
      
     }
