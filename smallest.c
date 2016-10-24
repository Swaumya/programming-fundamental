/*
Student Name: Swaumya Pokharel
Subject     :Programming Fundamental
Roll        :
Lab no      :
Program     : Write a c program to print largest and smallest number using ternary opeartor
Date        :24th October 2016
*/
      
      
      #include<stdio.h>
      
        int main()
        {
        
          int a,b,largest,smallest;
          printf("Enter first number:\n");
          scanf("%d",&a);
          printf("Enter the second number:\n");
          scanf("%d",&b);
         largest=(a>b)?a:b;
         smallest=(a<b)?a:b;
         printf("The largest num=%d\n",largest);
         printf("The smallest vnumber=%d\n",smallest);
         
         return 0;
         }
