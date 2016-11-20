#include<stdio.h>
#include<stdlib.h>
					
					
                      int main()
                      {
                      int opt=0;
                      float l1,b1,a,b,h,area=0,per=0,area1=0;
                      printf("*********************************************************\n");
              
                      printf("*\t\t1 Area of Rectangle\t\t\t*\n");
                      printf("*\t\t2 Perimeter of rectangle\t\t*\n");
                      printf("*\t\t3.Area of trapezium\t\t \t*\n");
                      printf("*\t\t4.Exit\t\t\t\t \t*\n");
                      printf("*********************************************************\n");
                      
                      
                      printf("Choose any 0f the option\n");
                      scanf("%d",&opt);
			switch(opt)
			{
			
			case 1:
			printf("Enter the length of rectagle: \n");
			scanf("%f",&l1);
			printf("Enter the breadth of rectagle: \n");
			scanf("%f",&b1);
			area=l1*b1;
			printf("The area of rectagle is %.2f: \n",area);
			 
			break;
			
			case 2:
			printf("Enter the length of rectagle: \n");
			 scanf("%f",&l1);
			printf("Enter the breadth of rectagle: \n");
			 scanf("%f",&b1);
			per=2*(l1+b1);
			printf("The perimeter of rectagle is %.2f: \n",per);
			break;
			
			case 3:
			printf("Enter the length of trapezium: \n");
			 scanf("%f",&a);
			printf("Enter the another length of trapezium: \n");
			 scanf("%f",&b);
			printf("Enter the height of trapezium: \n");
			 scanf("%f",&h);
			area1=0.5*(a+b)*h;
			printf("The area of rectagle is %.2f: \n",area);
			break;
			
			case 4:
			exit(0);
			break; 
			}
		return 0;
				      
			}
