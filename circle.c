 #include<stdio.h>
# define pi 3.15 
     void circle ();
     int main()

       {
          circle();
          return 0;
         }
        void circle()
        {
           int area,r;
           printf("Enter radius :\n");
           scanf("%d",&r);
           area=pi*r*r;
           printf(" The radius of circle  is %d,",area);
      
     }
