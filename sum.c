/*
Student Name: Swaumya Pokharel
Subject     :Programming Fundamental
Roll        :
Lab no      :
Program     : Write a c program to print 
Date        :24th October 2016
*/
      
      
      #include<stdio.h>
      #include<math.h>
      
        int main()
        {
        int a,b,c,sum,product,average,largest,smallest;
       
        printf("Enter the first number:\n");
        scanf("%d",&a);
        printf("Enter the second number:\n");
        scanf("%d",&b);
        printf("Enter the third number:\n");
        scanf("%d",&c);
        
        sum=a+b+c;
        printf("The sum of three numbers =%d\n",sum);
        
        product=a*b*c;
        printf("The product of three numbers =%d\n",product);
        
        average=(a+b+c)/3;
        printf("The average of three numbers =%d\n",average);
       
       if (a>=b && a>=c)


	        printf("The largest number is a\n");
        
        else if (b>=a && b>=c)
        
        printf("The largest number is b \n");
        
        else
          printf("The largest number is c\n");
    
    
     
      if (a<=b && a<=c)
      
       printf("The  smallest number is a\n");
       
       else if (b<=a && b<=c)
       
        printf("The smallest number is b\n");
        
        else
        
         printf("The smallest number is c\n");
        
        
        
      
     
     
        return 0;
        
        
        
        }
        
        
